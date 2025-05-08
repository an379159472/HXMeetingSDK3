//
//  HXPersonalMeetingSettingsModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXPersonalMeetingSettingsModel : NSObject

// 是否开启主持人密钥；

@property (nonatomic, assign) NSInteger is_enable_host_secret_key;

// 是否开启密码；

@property (nonatomic, assign) NSInteger is_enable_password;

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
 @brief 会议室名称
 */
@property (nonatomic, strong) NSString * self_meet_theme_name;

/*!
 @brief 会议链接域名
 */
@property (nonatomic, strong) NSString * domain;

/*!
 @brief 个人会议室背景
 */
@property (nonatomic, strong) NSString * meet_background;

/*!
 @brief 最大能力  1:1080p(h264) 4:4k（vp9）
 */
@property (nonatomic, assign) NSInteger max_video_res;

@end

NS_ASSUME_NONNULL_END
