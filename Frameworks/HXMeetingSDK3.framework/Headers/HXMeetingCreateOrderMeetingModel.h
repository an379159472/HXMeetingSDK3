//
//  HXMeetingCreateOrderMeetingModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingCreateOrderMeetingModel
 @brief 创建预约会议模型
 */
@interface HXMeetingCreateOrderMeetingModel : NSObject
/*!
 @brief 主题
 注：
 */
@property (nonatomic, strong) NSString *theme;
/*!
 @brief 开始时间
 */
@property (nonatomic, assign) NSInteger start_time;
/*!
 @brief 结束时间
 */
@property (nonatomic, assign) NSInteger end_time;
/*!
 @brief 时区
 */
@property (nonatomic, strong) NSString *timezone;
/*!
 @brief 周期类别
 注：NONE 从不 | EVERY_DAY 每天  | WEEK_DAY_NUM 每周周X | MONTH_DAY_NUM 每月X号 | TWO_WEEK_DAY_NUM 每两月X号 |YEAR_DAY_NUM 每年X月X号
 */
@property (nonatomic, strong) NSString *cycle_frequency_type;
/*!
 @brief 重复数量
 */
@property (nonatomic, assign) NSInteger cycle_loop_num;
/*!
 @brief 备用主持人
 */
@property (nonatomic, assign) NSInteger backup_host_user;
/*!
 @brief 参会用户
 */
@property (nonatomic, strong) NSArray<NSString *> *attend_user;
/*!
 @brief 参会部门
 注：org_id
    depts:[] 部门id
 */
@property (nonatomic, strong) NSDictionary *attend_user_dept;
/*!
 @brief 会议媒体类型
 注：1视频会议 2研讨会
 */
@property (nonatomic, assign) NSInteger media_type;
/*!
 @brief 会议最大能力
 注：:1080p 2:2K 3:3K .....8:8k
 */
@property (nonatomic, assign) NSInteger max_video_res;
/*!
 @brief 会议号类型
 注：:0个人会议室 1自动生成
 */
@property (nonatomic, assign) NSInteger meet_id_type;
/*!
 @brief 会议密码
 注：4-8位 纯数字
 */
@property (nonatomic, strong) NSString *meet_pwd;
/*!
 @brief 主持人密钥
 注：6位 纯数字
 */
@property (nonatomic, strong) NSString *host_secret_key;
/*!
 @brief 是否开启等待室
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger is_enable_waiting_room;
/*!
 @brief 允许多端入会
 注：0：禁止；1：允许
 */
@property (nonatomic, assign) NSInteger multi_client_join;
/*!
 @brief 通过身份验证后才能入会
 注：0：从不；1：企业内部成员
 */
@property (nonatomic, assign) NSInteger join_auth_mode;
/*!
 @brief 提前入会
 注：0：不允许； 1：允许； 2：不允许但主持人已加入
 */
@property (nonatomic, assign) NSInteger join_before_host;
/*!
 @brief 成员入会时是否开启视频
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger mem_on_join_open_video;
/*!
 @brief 成员入会时是否开启音频
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger mem_on_join_open_audio;
/*!
 @brief 主持人入会时是开启视频
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger host_on_join_open_video;
/*!
 @brief 主持人入会时是开启音频
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger host_on_join_open_audio;
/*!
 @brief 聚焦模式
 注：0：关闭； 1：开启
 */
@property (nonatomic, assign) NSInteger focus_mode;

/*!
 @brief 账号id
 */
@property (nonatomic, strong) NSString * accid;

/*!
 @brief 周期会议单场标识（修改时用）
 */
@property (nonatomic, assign) NSInteger item_id;

/*!
 @brief 周期会议标识（修改时用）
 */
@property (nonatomic, assign) NSInteger cycle_id;

/*!
 @brief 分组模版id
 */
@property (nonatomic, assign) NSInteger group_template_id;




@end

NS_ASSUME_NONNULL_END
