//
//  HXMeetingJoinParamModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXMeetingJoinParamModel
 @brief 加入会议参数模型
 */
@interface HXMeetingJoinParamModel : NSObject
/*!
 @brief 会议唯一ID
 */
@property (nonatomic, strong) NSString *meetingUUid;
/*!
 @brief 会议id
 */
@property (nonatomic, strong) NSString *meetingId;
/*!
 @brief 电话号入会
 */
@property (nonatomic, strong) NSString *meetingTel;
/*!
 @brief 成员uuid
 */
//@property (nonatomic, strong) NSString *memUUid;
/*!
 @brief 会议密码
 */
@property (nonatomic, strong) NSString *meetingPwd;
/*!
 @brief 参会人昵称
 */
@property (nonatomic, strong) NSString *userName;
/*!
 @brief 参会人手机号
 */
@property (nonatomic, strong) NSString *userTel;

/*!
 @brief 头像
 */
@property (nonatomic, strong) NSString *avatar;

/*!
 @brief 入会开启音频
 */
@property (nonatomic, assign) BOOL openaudio;

/*!
 @brief 入会开启视频
 */
@property (nonatomic, assign) BOOL openvideo;




#pragma mark 非SDK3字段， 客户端自用
@property (nonatomic, copy) NSString *meetTheme;

@end

NS_ASSUME_NONNULL_END
