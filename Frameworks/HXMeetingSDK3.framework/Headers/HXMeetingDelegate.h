//
//  HXMeetingDelegate.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>
#import <HXMeetingSDK3/HXMeetingParam.h>



@class HXMeetingParameterModel,HXMeetingUserAudioStatusModel,HXMeetingChatModel,HXMicInfoModel,HXSpeakerInfoModel,HXCameraInfoModel,HXShareInfoModel,HXInvitedUserModel,HXMeetingTimerInfoModel,HXMeetingUserInfoModel,HXWhiteBoardAssistModel,HXHttpErrorModel, HXShareRectModel;

@protocol HXWebsocketDelegate <NSObject>

/**
 会前webSocket接收
 */
- (void)onReciveRpDataWithType:(HXBeforeMeetWebsocketType)type recvData:(NSDictionary * _Nonnull)recvData;

@end

#pragma mark - HXCheckUpdateDelegate(版本检测更新代理)

@protocol HXCheckUpdateDelegate <NSObject>

@optional

/**
 版本更新回调
 */
- (void)onCheckUpdateWithStatusCode:(NSInteger)statusCode recvData:(NSString * _Nonnull)recvData;

@end

#pragma mark - HXMeetingActionDelegate(会议结果回调)
/*!
 @protocol HXMeetingServiceDelegate
 @brief 会议服务代理
 */
@protocol HXMeetingActionDelegate <NSObject>

@optional

#pragma mark 创建会议结果回调
/*!
@brief 创建会议结果回调
@param status 当前状态
@param errModel 会议状态的详细原因
*/
- (void)onMeetingCreateResult:(HXMeetingStatus)status ErrorModel:(HXHttpErrorModel *_Nonnull)errModel;

#pragma mark 加入会议结果回调
/*!
@brief 加入会议结果回调
@param status 当前状态
@param errModel 会议状态的详细原因
*/
- (void)onMeetingJoinResult:(HXMeetingStatus)status ErrorModel:(HXHttpErrorModel *_Nonnull)errModel;

@end



#pragma mark - HXMeetingServiceDelegate(会议服务回调)
/*!
 @protocol HXMeetingServiceDelegate
 @brief 会议服务代理
 */
@protocol HXMeetingServiceDelegate <NSObject>

@optional
#pragma mark 会议状态回调
/*!
@brief 会议状态回调
@param status 当前状态
@param errModel 会议状态的详细原因
@warning 如果 status == HXMeetingStatus_Failed, result 的值为  \link MeetingFailCode \endlink. 如果 status == HXMeetingStatus_Ended, result 的值为  \link MeetingEndReason \endlink
*/
- (void)onMeetingStatusChanged:(HXMeetingStatus)status ErrorModel:(HXHttpErrorModel * _Nullable)errModel;

#pragma mark 会议统计警告信息通知
/*!
@brief 会议统计警告信息通知
@param type 会议统计信息警告类型
*/
- (void)onMeetingStatisticsWarningNotification:(HXMeetingStatisticsWarningType)type;

#pragma mark 会议参数通知回调
/*!
@brief 会议参数通知回调
@param model 会议参数
*/
- (void)onMeetingParameterNotification:(HXMeetingParameterModel *_Nonnull)model;

@end



#pragma mark - HXMeetingAudioServiceDelegate(会议音频回调)
/*!
 @protocol HXMeetingAudioServiceDelegate
 @brief 会议音频代理
 */
@protocol HXMeetingAudioServiceDelegate <NSObject>

@optional
#pragma mark 用户的音频状态已更改回调
/*!
@brief 用户的音频状态已更改回调
@param arr   音频状态已更改的用户信息列表。一旦函数调用结束，列表将被清空
*/
- (void)onUserAudioStatusChange:(NSArray <HXMeetingUserAudioStatusModel *>*_Nonnull)arr;

#pragma mark 音频处于活动状态的用户更改的回调事件
/*!
@brief 音频处于活动状态的用户更改的回调事件
@param arr 成员id数组
*/
- (void)onUserActiveAudioChange:(NSArray <NSString *>*_Nonnull)arr;

#pragma mark 会主持人要求开启音频通知
/*!
@brief 主持人要求开启音频通知
*/
- (void)onHostRequestStartAudio;

#pragma mark 麦克风电平变更通知
/*!
@brief 麦克风电平变更通知
*/
- (void)onLevelChanged:(int)value;


#pragma mark 收到被静音消息 ( 0= 全部静音; 1=被主持人单独静音)
/*!
@brief 收到被静音消息 ( 0= 全部静音; 1=被主持人单独静音)
*/
- (void)onMutedNotification:(int)value;

@end



#pragma mark - HXMeetingChatServiceDelegate(会议聊天回调)
/*!
 @protocol HXMeetingChatServiceDelegate
 @brief 会议聊天代理
 */
@protocol HXMeetingChatServiceDelegate <NSObject>

@optional

#pragma mark 聊天新消息回调
/*!
@brief 聊天新消息回调
@param model 消息模型
*/
- (void)onChatMsgNotifcation:(HXMeetingChatModel *_Nonnull)model;

#pragma mark 回应新消息回调
/*!
@brief 回应新消息回调
@param model 消息模型
*/
- (void)onReplyMsgNotifcation:(HXMeetingChatModel *_Nonnull)model;

#pragma mark 聊天消息被删除通知
/*!
@brief 聊天消息被删除通知
@param msgId 消息id
@param type 消息删除类型
*/
- (void)onChatMsgDeleteNotification:(NSString *_Nonnull)msgId DeleteType:(HXMeetingChatDeleteType)type;

#pragma mark 聊天权限改变回调
/*!
@brief 聊天权限改变回调
@param priviledge 权限枚举
*/
- (void)onChatPriviledgeChangedNotification:(HXMeetingChatPriviledge)priviledge;

#pragma mark 是否允许等待室成员私聊主持人改变回调
/*!
@brief 是否允许等待室成员私聊主持人改变通知
@param isAllow yes：允许
*/
- (void)onChatAllowWaitingRoomUserChatToHostChangedNotification:(BOOL)isAllow;

#pragma mark 新消息数量变更通知
/*!
@brief 新消息数量变更通知
@param num 数量
*/
- (void)onNewMessageNumberChanged:(NSInteger)num;

#pragma mark 有人@了我
/*!
@brief 有人"@"了我
*/
- (void)onAtMe;


- (void)onSendMsgResult:(BOOL)isSun ErrModel:(HXHttpErrorModel * _Nonnull)errModel;

@end



#pragma mark - HXMeetingParticipantsServiceDelegate(会议成员回调)
/*!
 @protocol HXMeetingParticipantsServiceDelegate
 @brief 会议成员代理
 */
@protocol HXMeetingParticipantsServiceDelegate <NSObject>

@optional

#pragma mark 用户加入会议的通知
/**
 * 用户加入会议的通知
 * @brief onUserJoin
 * @param arr  成员id数组
 */
- (void)onUserJoin:(NSArray <NSString *>*_Nonnull)arr;

#pragma mark 用户离开会议的通知
/*!
@brief 用户离开会议的通知
@param arr  成员id数组
*/
- (void)onUserLeft:(NSArray <NSString *>*_Nonnull)arr;

#pragma mark 主持人变更通知
/*!
@brief 主持人变更通知
@param memUuid  成员id
@param isHost yes：成为主持人
*/
- (void)onHostChange:(NSString *_Nonnull)memUuid IsHost:(BOOL)isHost OperatorUUid:(NSString *_Nonnull)operatorUUid;

#pragma mark 主讲人变更通知
/*!
@brief 主讲人变更通知
@param memUuid  成员id
@param isCoHost yes：成为主讲人
*/
- (void)onCoHostChange:(NSString *_Nonnull)memUuid IsCoHost:(BOOL)isCoHost OperatorUUid:(NSString *_Nonnull)operatorUUid;

#pragma mark 举手状态变更通知
/*!
@brief 举手状态变更通知
@param memUuid  成员id
@param isRaiseHand yes：举手
@param operatorUUid 操作者id
*/
- (void)onLowOrRaiseHandStatusChanged:(NSString *_Nonnull)memUuid IsRaiseHand:(BOOL)isRaiseHand OperatorUUid:(NSString *_Nonnull)operatorUUid;

#pragma mark 所有人手放下通知
/*!
@brief 所有人手放下通知
*/
- (void)onAllHandsLowered:(NSString *_Nonnull)operatorUUid;

#pragma mark 屏幕名称变更通知
/*!
@brief 屏幕名称变更通知
@param memUuid  成员id
@param userName 用户新名称
*/
- (void)onUserNameChanged:(NSString *_Nonnull)memUuid UserName:(NSString *_Nonnull)userName;

#pragma mark 云录制状态通知
/*!
@brief 云录制状态通知
@param status  录制状态
*/
- (void)onCloudRecordingStatusChanged:(HXMeetingRecordStatus)status;

#pragma mark 授权参会人开启倒计时通知
- (void)onAllowParticipantsCountdownChanged:(BOOL)isEnable;

#pragma mark 暂停/恢复所有人活动通知
- (void)onPauseParticipantsActiveChanged:(BOOL)isEnable;

#pragma mark 允许自我移除聚焦变更通知
- (void)onAllowParticipantsToRemoveSelfSpotlightChanged:(BOOL)isEnable;

#pragma mark 允许参会人举手变更通知
- (void)onAllowParticipantsToHandsupChanged:(BOOL)isEnable;

#pragma mark 允许发送回应变更通知
- (void)onAllowParticipantsToSendResponseChanged:(BOOL)isEnable;

#pragma mark 成员电平变化通知
- (void)onAudioLevelChanged:(NSString *_Nullable)memid Level:(int)level;

@end




#pragma mark - HXMeetingVideoServiceDelegate(会议视频回调)
/*!
 @protocol HXMeetingVideoServiceDelegate
 @brief 会议视频回调
 */
@protocol HXMeetingVideoServiceDelegate <NSObject>

@optional


#pragma mark 用户视频状态更改的回调事件
/*!
@brief 用户视频状态更改的回调事件
@param memUuid   用户id
@param status  状态枚举
*/
- (void)onUserVideoStatusChange:(NSString *_Nonnull)memUuid Status:(HXMeetingVideoStatus)status;

#pragma mark 主持人请求开启视频通知
/*!
@brief 主持人请求开启视频通知
*/
- (void)onHostRequestStartVideo;


//
//#pragma mark 焦点视频用户列表变更通知
///*!
//@brief 焦点视频用户列表变更通知
//*/
//- (void)onSpotlightedUserListChangeNotification;
//
//
//
//#pragma mark 活动发言人变更通知
///*!
//@brief 活动发言人变更通知
//@param memUuid   用户id
//*/
//- (void)onActiveSpeakerChanged:(NSString *_Nonnull)memUuid;
//
//#pragma mark 本地用户排序变更通知
///*!
//@brief 本地用户排序变更通知
//@param arr 不知道是什么？
//*/
//- (void)onLocalVideoOrderUpdated:(NSArray<NSString *> *_Nonnull)arr;
//
//#pragma mark 用户视频质量更改的回调事件
///*!
//@brief 用户视频质量更改的回调事件
//@param memUuid   用户id
//@param quality  质量枚举
//*/
//- (void)onUserVideoQualityChange:(NSString *_Nonnull)memUuid Quality:(HXMeetingConnectionQuality)quality;
//
//
//#pragma mark 本地锁定视频变化
///*!
//@brief 本地锁定视频变化
//@param memUuid   用户id
//@param isLock  yes：锁定
//*/
//- (void)onVideoLockedChanged:(NSString *_Nonnull)memUuid IsLock:(BOOL)isLock;

@end


#pragma mark - HXMeetingWaitingRoomServiceDelegate(等待室回调)
/*!
 @protocol HXMeetingWaitingRoomServiceDelegate
 @brief 会议等待室回调
 */
@protocol HXMeetingWaitingRoomServiceDelegate <NSObject>


@optional


#pragma mark 用户加入等待室
/*!
@brief 用户加入等待室回调事件
@param memUuid   用户id
*/
- (void)onWatingRoomUserJoin:(NSString *_Nonnull)memUuid;

#pragma mark 用户离开等待室
/*!
@brief 用户离开等待室
@param memUuid   用户id
*/
- (void)onWatingRoomUserLeft:(NSString *_Nonnull)memUuid;

#pragma mark 是否支持等待室状态变化
/*!
@brief 是否支持等待室状态变化
@param isEnable   yes：启用；no：禁用
*/
- (void)onEnableWaitintRoomChange:(BOOL)isEnable;

#pragma mark 是否允许等待室成员私聊主持人的设置变化
/*!
@brief 是否允许等待室成员私聊主持人的设置变化
@param isAllow   yes：允许
*/
- (void)onWaitingPrivateChatHostSettingChange:(BOOL)isAllow;

@end


#pragma mark - HXGeneralSettingDelegate(通用设置回调)
@protocol HXGeneralSettingDelegate <NSObject>

@optional

#pragma mark 网络变化回调
/*!
 @brief 网络变化回调
 @param type  网络检测数据类型
 @param value  网络检测数据类型
 * type==DETECTING_NETWORK_TYPE_NA 正常 (NetworkStatus)value == NETWORK_STATUS_NORMAL 其他异常
 * type==DETECTING_NETWORK_TYPE_NC 正常 (NetworkStatus)value == NETWORK_STATUS_NORMAL 其他异常
 * type==DETECTING_NETWORK_TYPE_SC 正常 (NetworkStatus)value == NETWORK_STATUS_NORMAL 其他异常
 * type==DETECTING_NETWORK_TYPE_DNS_MS 异常 value==-1 >=0则显示 value ms
 * type==DETECTING_NETWORK_TYPE_C_MS 异常 value==-1 >=0则显示 value ms
 */
- (void)onNetworkInfoChanged:(HXDetectingNetworkType)type Value:(int)value;

#pragma mark 焦点模式开启/关闭变更通知
/**
 * 焦点模式开启/关闭变更通知
 * @brief onEnableFocusModeChanged
 * @param enable
 */
- (void)onEnableFocusModeChanged:(BOOL)isEnable;
@end

#pragma mark - HXAudioSettingDelegate(音频设置回调)
@protocol HXAudioSettingDelegate <NSObject>
#pragma mark 麦克风设备列表变更通知
/**
 * 麦克风设备列表变更通知
 * @brief onComputerMicDeviceChanged
 * @param micList 麦克风设备列表
 */
- (void)onComputerMicDeviceChanged:(NSArray<HXMicInfoModel *>*_Nonnull)micList;

#pragma mark 扬声器设备列表变更通知
/**
 * 扬声器设备列表变更通知
 * @brief onComputerSpeakerDeviceChanged
 * @param speakerList 扬声器设备列表
 */
- (void)onComputerSpeakerDeviceChanged:(NSArray<HXSpeakerInfoModel *>*_Nonnull)speakerList;

#pragma mark 选中的麦克风变更通知
/**
 * 选中的麦克风变更通知
 * @brief onDefaultMicDeviceChanged
 * @param deviceId 设备id
 * @param deviceName 设备名称
 */
- (void)onDefaultMicDeviceChanged:(NSString *_Nonnull)deviceId DeviceName:(NSString *_Nonnull)deviceName;

#pragma mark 当前扬声器变更通知
- (void)onCurrentSpeakerDeviceChanged:(HXMeetingPhoneSpeakerMode )mode;
@end


#pragma mark - HXVideoSettingDelegate(视频设置回调)
@protocol HXVideoSettingDelegate <NSObject>

@optional


#pragma mark 计算机摄像头设备变更通知
/**
 * 计算机摄像头设备变更通知
 * @brief onComputerCamDeviceChanged
 * @param cameraList
 * 如果SDK检测到计算机摄像头设备已更改，则发生回调事件。
 */
- (void)onComputerCamDeviceChanged:(NSArray<HXCameraInfoModel *>*_Nonnull)camList;

#pragma mark 正在使用的摄像头设备变更通知
/**
 * 正在使用的摄像头设备变更通知
 * @brief onDefaultCamDeviceChanged
 * @param deviceId
 * @param deviceName
 */
- (void)onDefaultCamDeviceChanged:(NSString *_Nonnull)deviceId DeviceName:(NSString *_Nonnull)deviceName;
@end


#pragma mark - HXShareDelegate(共享回调)

@protocol HXShareDelegate <NSObject>

@optional

/**
 * 共享状态改变回调
 * @brief onSharingStatus
 * @param memUUid
 * @param status        共享状态，详细 \link ShareStatusType \endlink
 */

- (void)onSharingStatus:(NSString * _Nonnull)memUUid status:(HXSharingStatus)status ShareType:(HXShareType)shareType;

/**
 * 当前共享信息改变通知
 * @brief onShareContentNotification
 * @param shareInfo     共享信息，详细 \link ShareInfo \endlink
 */
- (void)onShareContentNotification:(HXShareInfoModel * _Nonnull)shareInfo;

/**
 * 共享设置类型的回调事件已更改
 * @brief onMultiShareOptionChangedNotification
 * @param type          共享设置类型。有关更多详细信息，请参阅\link SharePriviledgeType\endlink结构。
 */

- (void)onMultiShareOptionChangedNotification:(HXMeetingSharePriviledgeType)type;

/**
 * 主持人要求参会人共享默认屏幕
 * @brief onRequestShared
 * @param shareStatus 通常只有两个动作 SHARE_STATUS_TYPE_BEGIN：请求开始共享 SHARE_STATUS_TYPE_END：请求结束共享
 */
- (void)onRequestShared:(HXShareStatusType)shareStatus;

/**
 * 共享的应用窗口位置改变
 * @brief onShareAppRectChanged
 * @param rect
 */
- (void)onShareAppRectChanged:(HXShareRectModel * _Nonnull)rect;

/**
 * 会议允许参会人共享屏幕变更通知
 * @brief onEnableSharedScreenChanged
 * @param enable
 */
- (void)onEnableSharedScreenChanged:(BOOL)enable;

/**
 * 会议允许给共享内容添加注释变更通知
 * @brief onEnableMarkToSharedScreenChanged
 * @param enable
 */
- (void)onEnableMarkToSharedScreenChanged:(BOOL)enable;

/**
 * 会议允许参会人共享白板变更通知
 * @brief onEnableSharedWhiteboardChanged
 * @param enable
 */
- (void)onEnableSharedWhiteboardChanged:(BOOL)enable;

/**
 * 会议允许参会人给白板添加注释变更通知
 * @brief onEnableMarkToSharedWhiteboardChanged
 * @param enable
 */
- (void)onEnableMarkToSharedWhiteboardChanged:(BOOL)enable;

/**
 * 共享白板设置类型的回调事件已更改
 * @brief onMultiShareWhiteboardOptionChangedNotification
 */
- (void)onMultiShareWhiteboardOptionChanged:(HXShareWhiteboardPriviledgeType)type;

#pragma mark 白板共享者列表变更通知
- (void)onWhiteboardSharerChangedBlockAction:(NSArray <HXMeetingUserInfoModel * >* _Nonnull)sharers;

#pragma mark 表示白板发起者变更了画布
- (void)onCanvasChangedBlockAction:(HXWhiteboardAction)action WhiteboardUUid:(NSString * _Nonnull)whiteboardUUid WhiteBoardId:(NSString * _Nonnull)whiteBoardId WhiteBoardName:(NSString * _Nonnull)whiteBoardName OperMemuuid:(NSString * _Nonnull)operMemuuid;

#pragma mark 加入白板房间通知
- (void)onJoinWhiteboardRoomChangedBlockAction:(NSString *_Nonnull)whiteboardUUid;

#pragma mark 白板参与者变更通知
- (void)onWhiteboardAssistChangedBlockAction:(NSArray <HXMeetingUserInfoModel *> *_Nonnull)assist;

@end


#pragma marl - HXShareDelegate(共享回调)
@protocol HXVideoSubscribeDelegate <NSObject>
@optional
//#pragma mark 视频内容变更回调
//- (void)onNormalVideoChanged:(NSString *)memUUid Frame:()frame;
//
//
//@property (nonatomic, copy) void (^ _Nullable onNormalVideoChangedBlock)(const std::string& memUUid, HXSDK::VideoFrame* frame);
//
//#pragma mark 本地预览回调
//@property (nonatomic, copy) void (^ _Nullable onPreviewVideoChangedBlock)(HXSDK::VideoFrame* frame);
//
//#pragma mark 活动视频回调
//@property (nonatomic, copy) void (^ _Nullable onActiveVideoChangedBlock)(HXSDK::VideoFrame* frame);

#pragma mark 订阅失败通知
- (void)onSubscribeUserFail:(HXVideoSubscribeFailReason)reason MemUUid:(NSString *_Nonnull)memUUid;

#pragma mark 本地用户排序变更通知
- (void)onLocalVideoOrderUpdatedBlockAction;

#pragma mark  普通视频变更活动的通知(用于判断常规视频是否正在发言)
- (void)onNormalVideoActiveChanged:(NSString *_Nonnull)memUuid;

#pragma mark  ActiveVideo对象中当前渲染对象变更通知
- (void)onActiveChanged:(NSString *_Nonnull)memUuid;


#pragma mark 设置焦点视频错误通知
- (void)onSpotlightFailNotification:(HXMeetingFailCode)code;

//@property (nonatomic, copy) void (^ _Nullable onSpotlightFailNotificationBlock)(HXSDK::MeetingFailCode meetingFailCode);
//
//#pragma mark 焦点视频列表变更通知
///**
// * 焦点视频列表变更通知
// * @brief onSpotlightedUserListChanged
// * @param spotlightedList
// */
//// virtual void onSpotlightedUserListChanged(std::list<std::string>* spotlightedList) = 0;
///
#pragma mark 焦点视频变化
- (void)onSpotlightChanged:(NSString *_Nullable)memUUid SpotlightSeq:(int)spotlightSeq OperUUid:(NSString *_Nullable)operUUid;

#pragma mark 视频锁定状态变更通知
- (void)onVideoLockedChanged:(NSString *_Nullable)memUUid IsLocked:(BOOL)isLocked;

#pragma mark 设置锁定视频错误通知
- (void)onLockedFailNotification:(HXMeetingFailCode)code;

//#pragma mark 视频网络网络质量
//@property (nonatomic, copy) void (^ _Nullable onUserVideoQualityChangedBlock)(HXSDK::ConnectionQuality quality, bool isDownLoad);


@end

#pragma mark - HXInviteDelegate(邀请回调)
@protocol HXInviteDelegate <NSObject>

/**
 * 邀请用户状态变化
 * @brief onInviteUserStatusChange
 * @param userId 客户端用户为userid 手机用户（5G、SIP、H323）是手机号码
 */
//virtual void onInviteUserStatusChanged(const std::string& userId, InviteStatus status) = 0;
//virtual void onInviteUsersStatusChanged(std::list<InvitedUserInfo>& inviteInfoList) = 0;

- (void)onInviteUserStatusChanged:(NSArray <HXInvitedUserModel *> * _Nullable)inviteList;

/**
* 邀请呼叫失败
* @brief onInviteFailed
* @param userModel
*/

//- (void)onInviteFailed:(HXInvitedUserModel * _Nullable)userModel;


/**
* 邀请用户列表变化
* @brief onInviteUserListChanged
*/
//virtual void onInviteUserListChanged() = 0;
- (void)onInviteUserListChanged;

/**
* 收到邀请
*/
//virtual void onReceiveInvite() = 0;

- (void)onReceiveInvite:(NSString * _Nullable)meetId meetTopic:(NSString * _Nullable)meetTopic inviterUserId:(NSString * _Nullable)inviterUserId inviterName:(NSString * _Nullable)inviterName inviterAvatar:(NSString * _Nullable)inviterAvatar meetPassword:(NSString * _Nullable)meetPassword meetMemCount:(int)meetMemCount Type:(HXInviteType)type;

/**
* 收到取消邀请
*/
//virtual void onReceiveCancelInvite(const std::string& meetId, const std::string& inviterUserId)
//    = 0;

- (void)onReceiveCancelInvite:(NSString * _Nullable)meetId inviterUserId:(NSString * _Nullable)inviterUserId;

@end


#pragma mark - HXCloudRecordingDelegate(云录制代理)

@protocol HXCloudRecordingDelegate <NSObject>

@optional

#pragma mark 云录制状态更改的回调事件
- (void)onCloudRecordingStatus:(HXMeetingRecordStatus)status;

#pragma mark 云录制操作反馈信息
- (void)onCloudRecordingOperResult:(int)code RecvData:(NSString * _Nullable)recvData;

#pragma mark 收到请求主持人开启云录制
- (void)onRequestCloudRecording:(NSString * _Nullable)requesterUUid;

#pragma mark 收到请求云录制的答复
- (void)onRespondRequestCloudRecording:(BOOL)isAction;

@end


#pragma mark - HXLocalRecordingDelegate(本地录制代理)
@protocol HXLocalRecordingDelegate <NSObject>

@optional

#pragma mark 本地录制设置变更
- (void)onRecordPriviligeSettingChanged:(HXMeetingRecordPriviledgeType)type;

#pragma mark 参会人请求主持人授予本地录制权限通知
- (void)onRequestRecordingPermissionNotification:(NSString * _Nonnull)memuuid;


#pragma mark 有成员进行本地录制通知
- (void)setOnHasLocalRecordingStatusChanged:(HXMeetingRecordStatus)status;

@end


#pragma mark - HXMeetingTimerDelegate(本地录制代理)
@protocol HXMeetingTimerDelegate <NSObject>

@optional

- (void)onTimerStart:(HXMeetingTimerInfoModel *_Nonnull)model;

- (void)onTimerPause:(int)operTimestamp CountSec:(int)countSec;

- (void)onTimerResume:(int)operTimestamp CountSec:(int)countSec;

- (void)onTimerStop;

- (void)onShowToAllChanged:(BOOL)isToAll;

- (void)onTimerMemListChanged:(NSArray<NSString *>*_Nonnull)memUUidList;
@end


#pragma mark - HXMediaPeDelegate(本地录制代理)
@protocol HXMediaPermissionDelegate <NSObject>

@optional
- (void)onCameraPermissionChanged:(BOOL)isGranted;

- (void)onMicrophonePermissionChanged:(BOOL)isGranted;
@end
