//
//  HXMeetingCreateParamModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>
#import <HXMeetingSDK3/HXMeetingCreateSettingsModel.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingCreateParamModel
 @brief 创建会议参数模型
 */
@interface HXMeetingCreateParamModel : NSObject
/*!
 @brief 会议id
 */
@property (nonatomic, strong) NSString *meetingId;
/*!
 @brief 会议密码
 */
@property (nonatomic, strong) NSString *meetingPwd;
/*!
 @brief 会议类型
 */
@property (nonatomic, assign) HXMeetingType meetingType;
/*!
 @brief 方数
 */
@property (nonatomic, assign) NSUInteger capacity;
/*!
 @brief 会议时长单位分钟
 */
@property (nonatomic, assign) NSUInteger duration;
/*!
 @brief 会议主题
 */
@property (nonatomic, strong) NSString *topic;

/*!
 @brief 昵称
 */
@property (nonatomic, strong) NSString *userName;

/*!
 @brief 账号id （写死 123）
 */
@property (nonatomic, strong) NSString *accountId;

/*!
 @brief 手机号
 */
@property (nonatomic, strong) NSString *telNum;

/*!
 @brief 参会人头像
 */
@property (nonatomic, strong) NSString *avatar;


/*!
 @brief 会议设置
 */
@property (nonatomic, strong) HXMeetingCreateSettingsModel *settings;

// 企业账号 空代表个人用户
@property (nonatomic, copy) NSString *orgId;

//bool openaudio;                         // 入会开启音频
//bool openvideo;                         // 入会开启视频

// 入会开启视频
@property (nonatomic, assign) BOOL openVideo;
// 入会开启音频
@property (nonatomic, assign) BOOL openAudio;

@end

NS_ASSUME_NONNULL_END
