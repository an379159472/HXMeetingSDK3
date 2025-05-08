//
//  HXInvitedUserModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2025/1/11.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXInvitedUserModel : NSObject

//会议返回的一个id
@property (nonatomic, copy) NSString *userID;

//非客户端设备 电话号码
@property (nonatomic, copy) NSString *userName;

//非客户端设备 电话号码
@property (nonatomic, copy) NSString *userTel;

//非客户端设备 空（UI自己填充）
@property (nonatomic, copy) NSString *userAvatar;

//类型
@property (nonatomic, assign) HXInviteType inviteType;

// 5G邀请类型
@property (nonatomic, assign) HXInviteTelType inviteTelType;

//状态
@property (nonatomic, assign) HXInviteStatus inviteStatus;

@end

NS_ASSUME_NONNULL_END
