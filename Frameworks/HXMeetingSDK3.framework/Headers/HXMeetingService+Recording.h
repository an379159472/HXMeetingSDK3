//
//  HXMeetingService+Recording.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/15.
//

#import <HXMeetingSDK3/HXMeetingService.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Recording)

#pragma mark 为指定的用户授予本地录制权限(用于收到请求) rememberChoice 是否勾选
/*!
@brief 为指定的用户授予本地录制权限(用于收到请求)
@param memUuid 成员id
@param rememberChoice 是否勾选
@return yes：成功
*/
- (BOOL)allowLocalRecordingForAction:(NSString *)memUuid RememberChoice:(BOOL)rememberChoice;


#pragma mark 取消指定用户的本地录制权限 (用于收到请求) rememberChoice 是否勾选
/*!
@brief 取消指定用户的本地录制权限 (用于收到请求)
@param memUuid 成员id
@param rememberChoice 是否勾选
@return yes：成功
*/
- (BOOL)disallowLocalRecordingForAction:(NSString *)memUuid RememberChoice:(BOOL)rememberChoice;


#pragma mark 为指定的用户授予本地录制权限(用于成员列表)
/*!
@brief 为指定的用户授予本地录制权限(用于成员列表) rememberChoice 是否勾选
@param memUuid 成员id
@param rememberChoice 是否勾选
@return yes：成功
*/
- (BOOL)allowLocalRecordingForMemberList:(NSString *)memUuid RememberChoice:(BOOL)rememberChoice;


#pragma mark 取消指定用户的本地录制权限 (用于成员列表) rememberChoice 是否勾选
/*!
@brief 取消指定用户的本地录制权限 (用于成员列表)
@param memUuid 成员id
@param rememberChoice 是否勾选
@return yes：成功
*/
- (BOOL)disallowLocalRecordingForMemberList:(NSString *)memUuid RememberChoice:(BOOL)rememberChoice;

#pragma mark 确定当前用户是否拥有更改其他用户的录制权限的权限
/*!
@brief 确定当前用户是否拥有更改其他用户的录制权限的权限
@return yes：是
*/
- (BOOL)canAllowDisAllowRecording;


#pragma mark 设置本地录制权限
/*!
@brief 设置本地录制权限
@param type 权限
@return yes：成功
*/
- (BOOL)setLocalRecordPermission:(HXMeetingRecordPriviledgeType) type;

#pragma mark 获取本地录制权限
/*!
@brief 获取本地录制权限
@return 本地录制权限
*/
- (HXMeetingRecordPriviledgeType)getLocalRecordPermission;


#pragma mark - 云录制
#pragma mark 开始云录制
/*!
@brief 开始云录制
*/
- (BOOL)startRecording;

#pragma mark 暂停云录制
/*!
@brief 暂停云录制
*/
- (BOOL)pauseRecording;

#pragma mark 恢复云录制
/*!
@brief 恢复云录制
*/
- (BOOL)resumeRecording;

#pragma mark 停止云录制
/*!
@brief 停止云录制
*/
- (BOOL)stopRecording;

#pragma mark 获取云录制状态
/*!
@brief 获取云录制状态
@return 云录制状态
*/
- (HXMeetingRecordStatus)getRecordingStatus;


#pragma mark 申请主持人开启云录制
/*!
@brief 申请主持人开启云录制
*/
- (BOOL)requestHostCloudRecording;

#pragma mark 答复申请主持人开启云录制
/**
* 答复申请主持人开启云录制
* @param memUuid 会议成员id
* @param isAction true 同意 false 拒绝
* @param always true - 一直拒绝 （action true时生效 ）
*/
- (BOOL)respondRequestCloudRecording:(NSString *)memUuid IsAction:(BOOL)isAction Always:(BOOL)always;

#pragma mark 本场会议是否具备云录制能力
/*!
@brief 本场会议是否具备云录制能力
*/
- (BOOL)hasRecordingAbility;
@end

NS_ASSUME_NONNULL_END
