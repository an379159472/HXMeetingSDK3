//
//  MeetingService.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2024/5/10.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>
#import <HXMeetingSDK3/HXMeetingDelegate.h>

@class HXMeetingCreateParamModel, HXMeetingJoinParamModel, HXMeetingInfoModel;

@interface HXMeetingService : NSObject

///当前发言者id
@property (nonatomic, copy) NSString * _Nullable actionMember;

///是否已连接耳机
@property (nonatomic, assign) BOOL isConnectHeadphones;

///当前音频输出模式
@property (nonatomic, assign) HXMeetingPhoneSpeakerMode speakerMode;

#pragma mark 添加操作代理
/*!
@brief 添加操作代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addActionDelegate:(id<HXMeetingActionDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除操作代理
/*!
@brief 删除操作代理
@param delegate  代理
*/
- (void)removeActionDelegate:(id<HXMeetingActionDelegate>_Nonnull)delegate;

#pragma mark 添加服务代理
/*!
@brief 添加服务代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addServiceDelegate:(id<HXMeetingServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除服务代理
/*!
@brief 删除服务代理
@param delegate  代理
*/
- (void)removeServiceDelegate:(id<HXMeetingServiceDelegate>_Nonnull)delegate;

#pragma mark 添加音频代理
/*!
@brief 添加音频代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addAudioDelegate:(id<HXMeetingAudioServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除音频代理
/*!
@brief 删除音频代理
@param delegate  代理
*/
- (void)removeAudioDelegate:(id<HXMeetingAudioServiceDelegate>_Nonnull)delegate;

#pragma mark 添加聊天代理
/*!
@brief 添加聊天代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addChatDelegate:(id<HXMeetingChatServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除聊天代理
/*!
@brief 删除聊天代理
@param delegate  代理
*/
- (void)removeChatDelegate:(id<HXMeetingChatServiceDelegate>_Nonnull)delegate;

#pragma mark 添加成员代理
/*!
@brief 添加成员代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addParticipantsDelegate:(id<HXMeetingParticipantsServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除成员代理
/*!
@brief 删除成员代理
@param delegate  代理
*/
- (void)removeParticipantsDelegate:(id<HXMeetingParticipantsServiceDelegate>_Nonnull)delegate;

#pragma mark 添加视频代理
/*!
@brief 添加视频代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addVideoDelegate:(id<HXMeetingVideoServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除视频代理
/*!
@brief 删除视频代理
@param delegate  代理
*/
- (void)removeVideoDelegate:(id<HXMeetingVideoServiceDelegate>_Nonnull)delegate;

#pragma mark 添加等待室代理
/*!
@brief 添加等待室代理
@param delegate  代理
@param queue  线程（默认：主线程）
*/
- (void)addWaitingRoomDelegate:(id<HXMeetingWaitingRoomServiceDelegate>_Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable )queue;

#pragma mark 删除等待室代理
/*!
@brief 删除等待室代理
@param delegate  代理
*/
- (void)removeWaitingRoomDelegate:(id<HXMeetingWaitingRoomServiceDelegate>_Nonnull)delegate;

#pragma mark 添加共享代理
/*!
 @brief 添加共享代理
 @param delegate  代理
 @param queue  线程（默认：主线程）
 */
- (void)addShareDelegate:(id<HXShareDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除共享代理
/*!
 @brief 删除共享代理
 @param delegate  代理
 */
- (void)removeShareDelegate:(id<HXShareDelegate> _Nonnull)delegate;


#pragma mark 添加视频订阅代理
/*!
 @brief 添加共享代理
 @param delegate  代理
 @param queue  线程（默认：主线程）
 */
- (void)addVideoSubscribeDelegate:(id<HXVideoSubscribeDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除视频订阅代理
/*!
 @brief 删除视频订阅代理
 @param delegate  代理
 */
- (void)removeVideoSubscribeDelegate:(id<HXVideoSubscribeDelegate> _Nonnull)delegate;

#pragma mark 添加通用设置代理
/*!
 @brief 添加通用设置代理
 @param delegate  代理
 @param queue  线程（默认：主线程）
 */
- (void)addGeneralSettingDelegate:(id<HXGeneralSettingDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;


#pragma mark 删除通用设置代理
/*!
 @brief 删除通用设置代理
 @param delegate  代理
 */
- (void)removeGeneralSettingDelegate:(id<HXGeneralSettingDelegate> _Nonnull)delegate;

#pragma mark 添加音频设置代理
- (void)addAudioSettingDelegate:(id<HXAudioSettingDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;


#pragma mark 删除音频设置代理
- (void)removeAudioSettingDelegate:(id<HXAudioSettingDelegate> _Nonnull)delegate;

#pragma mark 添加邀请代理
/*!
 @brief 添加邀请代理
 @param delegate  代理
 @param queue  线程（默认：主线程）
 */
- (void)addInviteDelegate:(id<HXInviteDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;
#pragma mark 删除邀请代理
/*!
 @brief 删除邀请代理
 @param delegate  代理
 */
- (void)removeInviteDelegate:(id<HXInviteDelegate> _Nonnull)delegate;


#pragma mark 添加版本更新代理
- (void)addCheckUpdateDelegate:(id<HXCheckUpdateDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

- (void)removeCheckUpdateDelegate:(id<HXCheckUpdateDelegate> _Nonnull)delegate;

#pragma mark 会前Websocket代理
- (void)addWebsocketDelegate:(id<HXWebsocketDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

- (void)removeWebsocketDelegate:(id<HXWebsocketDelegate> _Nonnull)delegate;

#pragma mark 添加云录制代理
- (void)addCloudRecordingDelegate:(id<HXCloudRecordingDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除云录制代理
- (void)removeCloudRecordingDelegate:(id<HXCloudRecordingDelegate> _Nonnull)delegate;


#pragma mark 添加本地录制代理
- (void)addLocalRecordingDelegate:(id<HXLocalRecordingDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除本地录制代理
- (void)removeLocalRecordingDelegate:(id<HXLocalRecordingDelegate> _Nonnull)delegate;

#pragma mark 添加倒计时代理
- (void)addTimerDelegate:(id<HXMeetingTimerDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除倒计时代理
- (void)removeTimerDelegate:(id<HXMeetingTimerDelegate> _Nonnull)delegate;

#pragma mark 添加媒体权限代理
- (void)addMediaPermissionDelegate:(id<HXMediaPermissionDelegate> _Nonnull)delegate delegateQueue:(dispatch_queue_t _Nullable)queue;

#pragma mark 删除媒体权限代理
- (void)removeMediaPermissionDelegate:(id<HXMediaPermissionDelegate> _Nonnull)delegate;

#pragma mark 清除所有代理
- (void)cleanAllDelegate;

#pragma mark - action

#pragma mark 创建会议
/*!
@brief 创建会议
@param param 创建会议参数
@return 0：成功
*/
- (HXMeetError)createMeetingWithCreateParam:(HXMeetingCreateParamModel *_Nonnull)param;

#pragma mark 加入会议
/*!
@brief 加入会议
@param param 加入会议参数
@return 0：成功
*/
- (HXMeetError)joinMeetingWithJoinParam:(HXMeetingJoinParamModel *_Nonnull)param;

#pragma mark 离开会议
/*!
@brief 离开会议
@param type 离开会议类型
@return yes：成功
*/
- (BOOL)leaveMeetingWithLeaveType:(HXLeaveMeetingType)type;

#pragma mark 等待室进入会议音视频

/**
 * 设置进入会议时音频状态
 * @brief SetInMeetingAudioOn
 * @param enable    true表示打开音频 false表示关闭音频
 * 可用于等待室进入互动室后的音频状态初始化
 * 仅在成员在等待室中有效
 */
- (BOOL)setWaitingToMeetingAudioOn:(BOOL)enable;

/**
 * 在等待室里获取当前视频设备状态
 * @brief GetWaitingToMeetingAudioOn
 * @return
 * 可用于进入等待室后获取入会时设置的音频状态
 * 仅在成员在等待室中有效
 */

- (BOOL)getWaitingToMeetingAudioOn;

/**
 * 设置进入会议时视频状态
 * @brief SetInMeetingAudioOn
 * @param enable true表示打开视频 false表示关闭视频
 * 可用于等待室进入互动室后的音频状态初始化
 * 仅在成员在等待室中有效
 */

- (BOOL)setWaitingToMeetingVideoOn:(BOOL)enable;

/**
 * 在等待室里获取当前视频设备状态
 * @brief GetWaitingToMeetingVideoOn
 * @return
 * 可用于进入等待室后获取入会时设置的视频状态
 * 仅在成员在等待室中有效
 */
- (BOOL)getWaitingToMeetingVideoOn;


#pragma mark 获取会议状态
/*!
@brief 获取会议状态
 注：主持人操作
@return 会议状态枚举
*/
- (HXMeetingStatus)getMeetingStatus;

#pragma mark 获取会议信息
/*!
@brief 获取会议信息
*/
- (nullable HXMeetingInfoModel *)getMeetingInfo;

#pragma mark 锁定会议室
/*!
@brief 锁定会议室
 注：主持人操作
@return yes：成功
*/
- (BOOL)lockMeeting;

#pragma mark 解锁会议室
/*!
@brief 解锁会议室
 注：主持人操作
@return yes：成功
*/
- (BOOL)unlockMeeting;

#pragma mark 获取当前会议室锁定状态
/*!
@brief 获取当前会议室锁定状态
@return yes：锁定；
*/
- (BOOL)isMeetingLocked;

#pragma mark 获取共享连接质量
/*!
@brief 获取共享连接质量
@param isSend yes：发送；no：接收
@return 质量枚举
*/
- (HXMeetingConnectionQuality)getSharingConnQualityWithIsSend:(BOOL)isSend;

#pragma mark 获取视频连接质量
/*!
@brief 获取视频连接质量
@param isSend yes：发送；no：接收
@return 质量枚举
*/
- (HXMeetingConnectionQuality)getVideoConnQualityWithIsSend:(BOOL)isSend;

#pragma mark 获取语音连接质量
/*!
@brief 获取语音连接质量
@param isSend yes：发送；no：接收
@return 质量枚举
*/
- (HXMeetingConnectionQuality)getAudioConnQualityWithIsSend:(BOOL)isSend;

#pragma mark 检查更新
/**
* 检查更新
*/
- (BOOL)chectUpdateWithCVersion;

#pragma mark 进入后台
- (void)applicationDidEnterBackground;

#pragma mark 返回前台
- (void)applicationDidBecomeActive;

@end

