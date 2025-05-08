//
//  HXMeetingCreateSettingsModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @class HXMeetingCreateSettingsModel
 @brief 创建会议设置模型
 */
@interface HXMeetingCreateSettingsModel : NSObject
/*!
 @brief 是否开启等待室
 */
@property (nonatomic, assign) BOOL isEnableWaitingRoom;
/*!
 @brief 主持人入会时是否开启视频
 */
@property (nonatomic, assign) HXJoinMeetingVideoMuteType hostOnJoinOpenVideo;
/*!
 @brief 主持人入会时是否开启音频
 */
@property (nonatomic, assign) HXJoinMeetingAudioMuteType hostOnJoinOpenAudio;
/*!
 @brief 成员入会时是否开启视频
 */
@property (nonatomic, assign) HXJoinMeetingVideoMuteType memOnJoinOpenVideo;
/*!
 @brief 成员入会时是否开启音频
 */
@property (nonatomic, assign) HXJoinMeetingAudioMuteType memOnJoinOpenAudio;
/*!
 @brief 水印透明度:1-100
 */
@property (nonatomic, assign) NSUInteger waterMarkAlpha;
/*!
 @brief 水印模式
 */
@property (nonatomic, assign) HXWaterMarkMode waterMarkMode;
/*!
 @brief 水印内容
 */
@property (nonatomic, strong) NSArray<NSString *> * waterMarkOption;
/*!
 @brief 是否开启主持人之前加入
 */
@property (nonatomic, assign) NSUInteger allowJoinBeforeHost;
/*!
 @brief 是否开启多端入会
 */
@property (nonatomic, assign) NSUInteger allowMultiClientJoin;
/*!
 @brief 主持人密钥
 */
@property (nonatomic, strong) NSString * hostSecretKey;
/*!
 @brief 最大视频能力
 */
@property (nonatomic, assign) HXMeetingMaxVideoRes maxVideoRes;
/*!
 @brief 是否身份认证
 */
@property (nonatomic, assign) NSUInteger isOpenJoinAuthMode;
/*!
 @brief 是否开启焦点模式
 */
@property (nonatomic, assign) NSUInteger isFocusMode;
@end

NS_ASSUME_NONNULL_END
