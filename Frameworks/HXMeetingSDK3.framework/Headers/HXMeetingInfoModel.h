//
//  HXMeetingInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>

/*!
 @class HXMeetingInfoModel
 @brief 会议信息模型
 */
@interface HXMeetingInfoModel : NSObject
/*!
 @brief 会议号码
 */
@property (nonatomic, strong) NSString *meetingId;
/*!
 @brief 会议唯一ID
 */
@property (nonatomic, strong) NSString *meetingUuid;
/*!
 @brief 会议主题
 */
@property (nonatomic, strong) NSString *meetingTopic;
/*!
 @brief 会议密码
 */
@property (nonatomic, strong) NSString *meetingPassword;
/*!
 @brief 会议类型
 */
@property (nonatomic, assign) HXMeetingType meetingType;

/*!
 @brief 账号id
 */
@property (nonatomic, strong) NSString *accountid;

/*!
 @brief 创建者userid
 */
@property (nonatomic, strong) NSString *createUserid;

/*!
 @brief 创建者名称
 */
@property (nonatomic, strong) NSString *createUserName;

/*!
 @brief 创建者电话
 */
@property (nonatomic, strong) NSString *createUsetTel;

/*!
 @brief 预约会议开始时间戳
 */
@property (nonatomic, assign) int reserveStartTimestamp;

@end

