//
//  HXMeetingCreateParamModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/17.
//

#import <Foundation/Foundation.h>
#pragma mark - enum
#pragma mark 错误枚举
/*!
 @brief 错误枚举
 */
typedef NS_ENUM(NSUInteger, HXMeetError){
    /*!
     @brief 成功
     */
    HXMeetError_Success = 0,
    /*!
     @brief 1.创建会议服务失败
     */
    HXMeetError_CreateService,
    /*!
     @brief 2.销毁会议服务失败
     */
    HXMeetError_DestroyService,
    /*!
     @brief 3.创建会议设置接口失败
     */
    HXMeetError_CreateSetting,
    /*!
     @brief 4.销毁会议设置接口失败
     */
    HXMeetError_DestroySetting,
    /*!
     @brief 5.创建共享渲染接口失败
     */
    HXMeetError_CreateShareRender,
    /*!
     @brief 6.销毁共享渲染接口失败
     */
    HXMeetError_DestroyShareRender,
    /*!
     @brief 7.无效参数
     */
    HXMeetError_InvalidParameter,
    /*!
     @brief 8.没有权限
     */
    HXMeetError_NoPermission,
    /*!
     @brief 9.没有共享
     */
    HXMeetError_MeetingYouHaveNoShare,
    /*!
     @brief 10.正在共享
     */
    HXMeetError_MeetingYouHaveShare,
    /*!
     @brief 11.不支持该功能
     */
    HXMeetError_MeetingDontSupportFeature,
    /*!
     @brief 12.未知
     */
    HXMeetError_Unknown,
    /*!
     @brief 13.使用前未初始化
     */
    HXMeetError_UnInitialize,
    
    /*!
     @brief 14.创建订阅视频管理失败
     */
    HXMeetError_CreateVideoSubscribeManager,
    
    /*!
     @brief 14.创建共享渲染接口失败
     */
    HXMeetError_CreateVideoRender,
    
    /*!
     @brief 15.销毁共享渲染接口失败
     */
    HXMeetError_DestroyVideoRender,
    
    /*!
     @brief 16.上传文件错误
     */
    HXMeetError_UploadFile,
    
    /*!
     @brief 17.创建白板发起者管理接口失败
     */
    HXMeetError_CreateMainWhiteBoard,
    
    /*!
     @brief 18.销毁白板发起者管理接口失败
     */
    HXMeetError_DestroyMainWhiteBoard,
    
    /*!
     @brief 19.创建白板参与者者管理接口失败
     */
    HXMeetError_CreateAssistWhiteBoard,
    
    /*!
     @brief 20.销毁白板参与者管理接口失败
     */
    HXMeetError_DestroyAssistWhiteBoard,
    
    /*!
     @brief 21.创建白板失败
     */
    HXMeetError_CreateWhiteBoard,
    
    /*!
     @brief 22.销毁白板失败
     */
    HXMeetError_DestroyWhiteBoard,
    
    /*!
     @brief 23.创建白板画布失败
     */
    HXMeetError_CreateWhiteBoardCanvas,
    
    /*!
     @brief 24.销毁白板画布失败
     */
    HXMeetError_DestroyWhiteBoardCanvas,
    
    /*!
     @brief 25.绑定白板画布失败
     */
    HXMeetError_BindWhiteBoardCanvas,
};


#pragma mark 会议控制状态
/*!
 @brief 会议控制状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingControlStatus){
    /*!
     @brief 无
     */
    HXMeetingControlStatus_None = 0,
    /*!
     @brief 已开始
     */
    HXMeetingControlStatus_Running,
    /*!
     @brief 重建中
     */
    HXMeetingControlStatus_Rebuild,
    /*!
     @brief 关闭中
     */
    HXMeetingControlStatus_Closing,
    /*!
     @brief 已关闭
     */
    HXMeetingControlStatus_Closed,
};

#pragma mark 会议类型
/*!
 @brief 会议类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingType){
    /*!
     @brief 0.即时会议
     */
    HXMeetingType_Instant = 0,
    /*!
     @brief 1.预约会议
     */
    HXMeetingType_Reservation,
    /*!
     @brief 2.周期会议
     */
    HXMeetingType_Cycle,
};

#pragma mark 会议媒体类型
/*!
 @brief 会议媒体类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingMediaType){
    /*!
     @brief 0.音视频会议
     */
    HXMeetingMediaType_AudioVideo = 0,
    /*!
     @brief 1.音频会议
     */
    HXMeetingMediaType_Audio,
    /*!
     @brief 2.多方通话
     */
    HXMeetingMediaType_Multparty,
};

#pragma mark 分组状态
/*!
 @brief 分组状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingGroupState){
    /*!
     @brief 0.未开启 (默认)
     */
    HXMeetingGroupState_None = 0,
    /*!
     @brief 1.关闭
     */
    HXMeetingGroupState_Close,
    /*!
     @brief 2.创建
     */
    HXMeetingGroupState_Create,
    /*!
     @brief 3.运行
     */
    HXMeetingGroupState_Runing,
    /*!
     @brief 4.创建并开始 仅作为创建分组的参数 实际状态为
     */
    HXMeetingGroupState_CreateAndStart,
};

#pragma mark 分组模式
/*!
 @brief 分组模式
 */
typedef NS_ENUM(NSUInteger, HXMeetingGroupMode){
    /*!
     @brief 0.未开启 (默认)
     */
    HXMeetingGroupMode_None = 0,
    /*!
     @brief 1.自动
     */
    HXMeetingGroupMode_Auto,
    /*!
     @brief 2.手动
     */
    HXMeetingGroupMode_NoAuto,
    /*!
     @brief 3.自选
     */
    HXMeetingGroupMode_Free,
};

#pragma mark 分组成员状态
/*!
 @brief 分组成员状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingGroupUserStatus){
    /*!
     @brief 0.未知状态
     */
    HXMeetingGroupUserStatus_Unknown = 0,
    /*!
     @brief 1.用户在主会议中，未分配分组
     */
    HXMeetingGroupUserStatus_Unassigned,
    /*!
     @brief 2.用户被分配到分组, 但未加入
     */
    HXMeetingGroupUserStatus_AssignedNotJoin,
    /*!
     @brief 3.用户已经加入分组中
     */
    HXMeetingGroupUserStatus_InGroup,
};


#pragma mark 主持人请求状态
/*!
 @brief 主持人请求状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingAttendeeRequestForHelpResult){
    /*!
     @brief 0.主持人空闲-收到你的请求时未收到其他人请求
     */
    HXMeetingAttendeeRequestForHelpResult_Idle = 0,
    /*!
     @brief 1.主持人繁忙-主持人在响应其他人的请求
     */
    HXMeetingAttendeeRequestForHelpResult_Busy,
    /*!
     @brief 2.主持人忽略了你的请求
     */
    HXMeetingAttendeeRequestForHelpResult_Ignore,
    /*!
     @brief 3.主持人已经在你的组内了
     */
    HXMeetingAttendeeRequestForHelpResult_HostAleradyInGroup,
};

#pragma mark 录制状态
/*!
 @brief 录制状态（成员）
 */
typedef NS_ENUM(NSUInteger, HXMeetingRecordStatus){
    /*!
     @brief 0.未录制 (默认)
     */
    HXMeetingRecordStatus_None = 0,
    /*!
     @brief 1.录制中
     */
    HXMeetingRecordStatus_Running,
    /*!
     @brief 2.暂停中
     */
    HXMeetingRecordStatus_Pausing,
//    /*!
//     @brief 3.录制结束
//     */
//    HXMeetingRecordStatus_End,
};

#pragma mark 录制模式
/*!
 @brief 录制模式
 */
typedef NS_ENUM(NSUInteger, HXMeetingRecordMode){
    /*!
     @brief 0.未录制 (默认)
     */
    HXMeetingRecordMode_None = 0,
    /*!
     @brief 1.演讲者视图
     */
    HXMeetingRecordMode_Speaker,
    /*!
     @brief 2.画廊视图
     */
    HXMeetingRecordMode_Gallery,
};


#pragma mark 邀请状态
/*!
 @brief 邀请状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingInviteeStatus){
    /*!
     @brief 0.邀请中
     */
    HXMeetingInviteeStatus_Inviting = 0,
    /*!
     @brief 1.已加入
     */
    HXMeetingInviteeStatus_Joined,
    /*!
     @brief 2.未加入
     */
    HXMeetingInviteeStatus_NotJoined,
};

#pragma mark 加入会议视频
/*!
 @brief 加入会议视频
 */
typedef NS_ENUM(NSUInteger, HXJoinMeetingVideoMuteType){
    /*!
     @brief 加入会议关闭视频
     */
    HXJoinMeetingVideoMuteType_Off = 0,
    /*!
     @brief 加入会议打开视频
     */
    HXJoinMeetingVideoMuteType_On,
};

#pragma mark 加入会议音频
/*!
 @brief 加入会议音频
 */
typedef NS_ENUM(NSUInteger, HXJoinMeetingAudioMuteType){
    /*!
     @brief 加入会议关闭音频
     */
    HXJoinMeetingAudioMuteType_Off = 0,
    /*!
     @brief 加入会议打开音频
     */
    HXJoinMeetingAudioMuteType_On,
    /*!
     @brief 加入会议大于六人关闭音频
     */
    HXJoinMeetingAudioMuteType_SixOn
};

#pragma mark 共享设置类型
/*!
 @brief 共享设置类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingSharePriviledgeType){
    /*!
     @brief 0.会中谁发起共享(仅主持人) 会中谁可以发起另外的共享(仅主持人) 会中同时共享人数(只能有一个)
     */
    HXMeetingSharePriviledgeTypeHostHostOnly = 0,
    /*!
     @brief 1.会中谁发起共享(仅主持人) 会中谁可以发起另外的共享(仅主持人) 会中同时共享人数(全体成员)
     */
    HXMeetingSharePriviledgeTypeHostHostAll,
    /*!
     @brief 2.会中谁发起共享(全体成员) 会中谁可以发起另外的共享(仅主持人) 会中同时共享人数(只能有一个)
     */
    HXMeetingSharePriviledgeTypeAllHostOnly,
    /*!
     @brief 3.会中谁发起共享(全体成员) 会中谁可以发起另外的共享(全体成员) 会中同时共享人数(只能有一个)
     */
    HXMeetingSharePriviledgeTypeAllAllOnly,
    /*!
     @brief 4.会中谁发起共享(全体成员) 会中谁可以发起另外的共享(全体成员) 会中同时共享人数(全体成员)
     */
    HXMeetingSharePriviledgeTypeAllAllAll,
    /*!
     @brief 5. 会中谁发起共享(全体成员) 会中谁可以发起另外的共享(仅主持人) 会中同时共享人数(全体成员)
     */
    HXMeetingSharePriviledgeTypeAllHostAll,
};

#pragma mark 本地录制设置选项
/*!
 @brief 本地录制设置选项
 */
typedef NS_ENUM(NSUInteger, HXMeetingRecordPriviledgeType){
    
    /*!
     @brief 0.会议没有录制能力，主持人也不可以
     */
    HXMeetingRecordPriviledgeType_RptNone = 0,
    /*!
     @brief 1.主持人和助理主持人可以录制
     */
    HXMeetingRecordPriviledgeType_EnableOnlyCoHostRecord,
    /*!
     @brief 2.授权指定人可以录制
     */
    HXMeetingRecordPriviledgeType_EnableAssignMemberRecord,
    /*!
     @brief 3.任何人都可以录制
     */
    HXMeetingRecordPriviledgeType_EveryOne,
    /*!
     @brief 4.仅主持人可以录制
     */
    HXMeetingRecordPriviledgeType_EnableOnlyHostRecord,
    
};

#pragma mark 允许主持人之前加入
/*!
 @brief 允许主持人之前加入
 */
typedef NS_ENUM(NSUInteger, HXMeetingJoinBeforeHost){
    /*!
     @brief 0.不允许
     */
    HXMeetingJoinBeforeHost_Disallow = 0,
    /*!
     @brief 1.允许
     */
    HXMeetingJoinBeforeHost_Allow,
    /*!
     @brief 2.不允许，但主持人已加入
     */
    HXMeetingJoinBeforeHost_DisallowHostJoin,
};

#pragma mark 水印模式
/*!
 @brief 加入会议音频
 */
typedef NS_ENUM(NSUInteger, HXWaterMarkMode){
    /*!
     @brief 0.未开启
     */
    HXWaterMarkMode_Off = 0,
    /*!
     @brief 1.单行
     */
    HXWaterMarkMode_SingleLine,
    /*!
     @brief 2.多行
     */
    HXWaterMarkMode_MultiLine,
};

#pragma mark 聊天权限 聊天权限（主持和联席主持人不受限制，对互动室成员的限制）
/*!
 @brief 聊天权限 聊天权限（主持和联席主持人不受限制，对互动室成员的限制）
 */
typedef NS_ENUM(NSUInteger, HXMeetingChatPriviledge){
    /*!
     @brief 1.允许自由聊天（允许公开聊天，允许私聊）
     */
    HXMeetingChatPriviledge_All = 1,
    /*!
     @brief 2.仅允许公开聊天（不允许成员之间私聊，但是允许私聊主持人）
     */
    HXMeetingChatPriviledge_Public,
    /*!
     @brief 3.仅允许私聊主持人
     */
    HXMeetingChatPriviledge_Host,
    /*!
     @brief 4.全体成员禁言（禁止所有人聊天）
     */
    HXMeetingChatPriviledge_Disable,
};

#pragma mark 视频框下方显示内容
/*!
 @brief 视频框下方显示内容
 */
typedef NS_ENUM(NSUInteger, HXMeetingVideoBoxBelowShow){
    /*!
     @brief 0.不显示
     */
    HXMeetingVideoBoxBelowShow_Hide = 0,
    /*!
     @brief 1.显示姓名
     */
    HXMeetingVideoBoxBelowShow_Show,
};

#pragma mark 聚焦模式
/*!
 @brief 聚焦模式
 */
typedef NS_ENUM(NSUInteger, HXMeetingFocusModeStatus){
    /*!
     @brief 0.关闭
     */
    HXMeetingFocusModeStatus_Close = 0,
    /*!
     @brief 1.开启
     */
    HXMeetingFocusModeStatus_Open,
};

#pragma mark 通过身份验证后才能入会
/*!
 @brief 通过身份验证后才能入会
 */
typedef NS_ENUM(NSUInteger, HXMeetingMultiClientJoin){
    /*!
     @brief 0.从不
     */
    HXMeetingMultiClientJoin_Never = 0,
    /*!
     @brief 1.企业内部成员
     */
    HXMeetingMultiClientJoin_EnterpriseNum,
};

#pragma mark 视频最大分辨率：1-8K
/*!
 @brief 视频最大分辨率：1-8K
 */
typedef NS_ENUM(NSUInteger, HXMeetingMaxVideoRes){
    /*!
     @brief 0.不做限制
     */
    HXMeetingMaxVideoRes_Free = 0,
    /*!
     @brief 1.1080p (1K)
     */
    HXMeetingMaxVideoRes_1K,
    /*!
     @brief 2.2K
     */
    HXMeetingMaxVideoRes_2k,
    /*!
     @brief 3.3K
     */
    HXMeetingMaxVideoRes_3K,
    /*!
     @brief 4.4K
     */
    HXMeetingMaxVideoRes_4K,
    /*!
     @brief 5.5K
     */
    HXMeetingMaxVideoRes_5K,
    /*!
     @brief 6.6K
     */
    HXMeetingMaxVideoRes_6K,
    /*!
     @brief 7.7K
     */
    HXMeetingMaxVideoRes_7K,
    /*!
     @brief 8.8K
     */
    HXMeetingMaxVideoRes_8K,
    
};


#pragma mark 成员类型
/*!
 @brief 成员类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingMemRoomType){
    /*!
     @brief 0.无
     */
    HXMeetingMemRoomType_None = 0,
    /*!
     @brief 1.互动成员
     */
    HXMeetingMemRoomType_MeetingRoom,
    /*!
     @brief 2.等待室成员
     */
    HXMeetingMemRoomType_WaittingRoom,
    /*!
     @brief 3.直播成员
     */
    HXMeetingMemRoomType_LivingRoom,
};

#pragma mark 成员状态
/*!
 @brief 成员状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingMemStatus){
    /*!
     @brief 0.无
     */
    HXMeetingMemStatus_None = 0,
    /*!
     @brief 1.已加入正在会议中
     */
    HXMeetingMemStatus_InMeeting,
    /*!
     @brief 2.已经离开会议
     */
    HXMeetingMemStatus_Left,
    /*!
     @brief 3.被踢出会议
     */
    HXMeetingMemStatus_KickOut,
    /*!
     @brief 4.异常掉线
     */
    HXMeetingMemStatus_Disconnection,
    /*!
     @brief 5.被转入等待室
     */
    HXMeetingMemStatus_ToWaittingRoom,
    /*!
     @brief 6.被转入会议室
     */
    HXMeetingMemStatus_ToMeetingRoom,
    /*!
     @brief 7.转入分会场
     */
    HXMeetingMemStatus_ToGroupMeeting,
};

#pragma mark 会议成员角色
/*!
 @brief 会议成员角色
 */
typedef NS_ENUM(NSUInteger, HXMeetingMemRoleType){
    /*!
     @brief 0.无
     */
    HXMeetingMemRoleType_None = 0,
    /*!
     @brief 1.主持人
     */
    HXMeetingMemRoleType_Host,
    /*!
     @brief 2.联席主持人
     */
    HXMeetingMemRoleType_CoHost,
    /*!
     @brief 3.参会者
     */
    HXMeetingMemRoleType_Normal,
};

#pragma mark 音频状态
/*!
 @brief 音频状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingAudioStatus){
    /*!
     @brief 0.无
     */
    HXMeetingAudioStatus_None = 0,
    /*!
     @brief 1.开启
     */
    HXMeetingAudioStatus_On,
    /*!
     @brief 2.静音
     */
    HXMeetingAudioStatus_Off,
    /*!
     @brief 3.被主持人静音
     */
    HXMeetingAudioStatus_MutedByHost,
};

#pragma mark 音频类型
/*!
 @brief 音频类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingAudioType){
    /*!
     @brief 0.初始化/未知
     */
    HXMeetingAudioType_Init = 0,
    /*!
     @brief 1.没有音频
     */
    HXMeetingAudioType_None,
    /*!
     @brief 2.网络语音模式
     */
    HXMeetingAudioType_Voip,
    /*!
     @brief 3.电话模式
     */
    HXMeetingAudioType_Phone,
};

#pragma mark 视频状态
/*!
 @brief 视频状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingVideoStatus){
    /*!
     @brief 0.无
     */
    HXMeetingVideoStatus_None = 0,
    /*!
     @brief 1.开启
     */
    HXMeetingVideoStatus_On,
    /*!
     @brief 2.关闭
     */
    HXMeetingVideoStatus_Off,
    /*!
     @brief 3.被主持人关闭
     */
    HXMeetingVideoStatus_MutedByHost,
};

#pragma mark 视频类型
/*!
 @brief 视频类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingVideoType){
    /*!
     @brief 0.初始化/未知
     */
    HXMeetingVideoType_Init = 0,
    /*!
     @brief 1.没有
     */
    HXMeetingVideoType_None,
    /*!
     @brief 2.摄像头
     */
    HXMeetingVideoType_Camera,
};

#pragma mark 共享状态
/*!
 @brief 共享状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingShareStatus){
    /*!
     @brief 0.无
     */
    HXMeetingShareStatus_None = 0,
    /*!
     @brief 1.开启
     */
    HXMeetingShareStatus_Begin,
    /*!
     @brief 2.暂停
     */
    HXMeetingShareStatus_Pause,
    /*!
     @brief 3.恢复
     */
    HXMeetingShareStatus_Resume,
    /*!
     @brief 4.关闭
     */
    HXMeetingShareStatus_End,
};


#pragma mark 共享状态
/*!
 @brief 共享状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingShareType){
    /*!
     @brief 0.无
     */
    HXMeetingShareType_None = 0,
    /*!
     @brief 1.共享应用程序
     */
    HXMeetingShareType_App,
    /*!
     @brief 2.共享桌面
     */
    HXMeetingShareType_Desktop,
    /*!
     @brief 3.共享白板
     */
    HXMeetingShareType_WhiteBoard,
    /*!
     @brief 4.共享部分屏幕
     */
    HXMeetingShareStatus_Frame,
    /*!
     @brief 5.共享第二摄像头
     */
    HXMeetingShareStatus_SecondCamera,
    /*!
     @brief 6.AIRPLAY
     */
    HXMeetingShareStatus_Airplay,
    /*!
     @brief 7.仅共享音频
     */
    HXMeetingShareStatus_Audio,
    /*!
     @brief 8.移动端专用共享屏幕
     */
    HXMeetingShareStatus_RecordScreen,
};

#pragma mark 客户端设备类型
/*!
 @brief 客户端设备类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingClientDeviceType){
    /*!
     @brief 0.无
     */
    HXMeetingClientDeviceType_None = 0,
    /*!
     @brief 1.Android：通过安卓设备加入会议.
     */
    HXMeetingClientDeviceType_Android,
    /*!
     @brief 2.PAD：PAD客户端
     */
    HXMeetingClientDeviceType_Pad,
    /*!
     @brief 3.Harmonyos：鸿蒙客户端
     */
    HXMeetingClientDeviceType_HarmonyOS,
    /*!
     @brief 4.iPHONE：苹果手机客户端
     */
    HXMeetingClientDeviceType_iPhoen,
    /*!
     @brief 5.IPAD：iPAD客户端
     */
    HXMeetingClientDeviceType_iPad,
    /*!
     @brief 6.UE_TAG：ue_tag客户端.
     */
    HXMeetingClientDeviceType_UeTag,
    /*!
     @brief 7.Windows：通过windows设备加入会议
     */
    HXMeetingClientDeviceType_Windows,
    /*!
     @brief 8.Mac： Mac客户端
     */
    HXMeetingClientDeviceType_Mac,
    /*!
     @brief 9.KyLin：麒麟客户端
     */
    HXMeetingClientDeviceType_KyLin,
    /*!
     @brief 10.Uniontech：统信客户端
     */
    HXMeetingClientDeviceType_Uniontech,
    /*!
     @brief 11.Web：Web客户端
     */
    HXMeetingClientDeviceType_Web,
    /*!
     @brief 12.APPLET：微信小程序客户端
     */
    HXMeetingClientDeviceType_AppLET,
    /*!
     @brief 13.VOLTE：VoLTE客户端
     */
    HXMeetingClientDeviceType_VoLTE,
    /*!
     @brief 14.RC：云录制服务
     */
    HXMeetingClientDeviceType_RC,
    /*!
     @brief 15.MTC：MTC.
     */
    HXMeetingClientDeviceType_MTC,
};

#pragma mark 会议状态
/*!
 @brief 会议状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingStatus){
    /*!
     @brief 0.没有正在运行的会议
     */
    HXMeetingStatus_Idle = 0,
    /*!
     @brief 1.正在连接到会议服务器
     */
    HXMeetingStatus_Connecting,
    /*!
     @brief 2.正在等待主持人开始会议
     */
    HXMeetingStatus_WaitingForHost,
    /*!
     @brief 3.会议已准备就绪，处于会议状态。
     */
    HXMeetingStatus_InMeeting,
    /*!
     @brief 4.断开会议服务器的连接，离开会议状态
     */
    HXMeetingStatus_Disconnecting,
    /*!
     @brief 5.正在重新连接会议服务器状态
     */
    HXMeetingStatus_Reconnecting,
    /*!
     @brief 6.无法连接会议服务器。
     */
    HXMeetingStatus_Failed,
    /*!
     @brief 7.会议结束
     */
    HXMeetingStatus_Ended,
    /*!
     @brief 8.未知状态
     */
    HXMeetingStatus_Unknow,
    /*!
     @brief 9.会议已锁定，以阻止其他参与者加入会议
     */
    HXMeetingStatus_Locked,
    /*!
     @brief 10.会议是开放的，参与者可以加入会议。
     */
    HXMeetingStatus_Unlocked,
    /*!
     @brief 11.在会议开始前加入会议的与会者在等候室。
     */
    HXMeetingStatus_InWaitingRoom,
    /*!
     @brief 12.进入分组会议
     */
    HXMeetingStatus_JoinGroupRoom,
    /*!
     @brief 13.离开分组会议
     */
    HXMeetingStatus_LeaveGroupRoom,
    /*!
     @brief 14.创建会议成功
     */
    HXMeetingStatus_CreateSuccess,
    /*!
     @brief 15.创建会议失败
     */
    HXMeetingStatus_CreateFailed,
    /*!
     @brief 16.加入会议成功
     */
    HXMeetingStatus_JoinSuccess,
    /*!
     @brief 17.加入会议失败
     */
    HXMeetingStatus_JoinFailed,
    /*!
     @brief 18.离开会议失败
     */
    HXMeetingStatus_LeaveFailed,
    /*!
     @brief 19.收到停会后离开媒体房间失败
     */
    HXMeetingStatus_EndedFailed,
    /*!
     @brief 20.收到被踢后离开媒体房间失败
     */
    HXMeetingStatus_KickoutedFailed,
};

#pragma mark 会议失败码
/*!
 @brief 会议失败码
 */
typedef NS_ENUM(NSUInteger, HXMeetingFailCode){
    /*!
     @brief 0.成功开始会议
     */
    HXMeetingFailCode_Success = 0,
    /*!
     @brief 1.网络错误
     */
    HXMeetingFailCode_NetworkErr,
    /*!
     @brief 2.重新连接错误
     */
    HXMeetingFailCode_ReconnectErr,
    /*!
     @brief 3.SDK2错误
     */
    HXMeetingFailCode_SDK2Err,
    /*!
     @brief 4.需要输入密码。
     */
    HXMeetingFailCode_NeedPasswordErr,
    /*!
     @brief 5.密码错误。
     */
    HXMeetingFailCode_PasswordErr,
    /*!
     @brief 6.会话错误
     */
    HXMeetingFailCode_SessionErr,
    /*!
     @brief 7.会议结束了
     */
    HXMeetingFailCode_MeetingOver,
    /*!
     @brief 8.会议尚未开始
     */
    HXMeetingFailCode_MeetingNotStart,
    /*!
     @brief 9.会议不存在
     */
    HXMeetingFailCode_MeetingNotExist,
    /*!
     @brief 10.会议容量已满
     */
    HXMeetingFailCode_MeetingUserFull,
    /*!
     @brief 11.客户端不兼容
     */
    HXMeetingFailCode_ClientIncompatible,
    /*!
     @brief 12.多媒体路由器未建立
     */
    HXMeetingFailCode_NoMmr,
    /*!
     @brief 13.会议已锁定
     */
    HXMeetingFailCode_Conflocked,
    /*!
     @brief 14.由于同一帐户的限制，会议失败
     */
    HXMeetingFailCode_MeetingRestricted,
    /*!
     @brief 15.会议由同一帐户限制，而与会者可以先于主持人加入
     */
    HXMeetingFailCode_MeetingRestrictedJBH,
    /*!
     @brief 16.无法发送web请求
     */
    HXMeetingFailCode_CannotEmitWebQuest,
    /*!
     @brief 17.令牌已过期
     */
    HXMeetingFailCode_CanNotStartTokenExpire,
    /*!
     @brief 18.视频硬件或软件错误
     */
    HXMeetingFailCode_SessionVideoErr,
    /*!
     @brief 19.音频自动启动错误
     */
    HXMeetingFailCode_SessionAudioAutoStartErr,
    /*!
     @brief 20.会议设置不允许启动会议
     */
    HXMeetingFailCode_ConfFailDisAllowHostMeeting,
    /*!
     @brief 21.已禁用写入配置文件
     */
    HXMeetingFailCode_WriteConfigFile,
    /*!
     @brief 22.禁止参加内部会议
     */
    HXMeetingFailCode_ForbidToJoinInternalMeeting,
    /*!
     @brief 23.已被主机删除
     */
    HXMeetingFailCode_ConfFailRemovedByHost,
    /*!
     @brief 24.禁止参加会议
     */
    HXMeetingFailCode_HostDisAllowOutsideUserJoin,
    /*!
     @brief 25.无效参数
     */
    HXMeetingFailCode_InvalidParameter,
    /*!
     @brief 26.会议已经存在
     */
    HXMeetingFailCode_MeetingIsExist,
    /*!
     @brief 27.会议重建中
     */
    HXMeetingFailCode_MeetingIsRebuilding,
    /*!
     @brief 28.联席主持人数量超过限制
     */
    HXMeetingFailCode_CohostLimet,
    /*!
     @brief 29.会议焦点视频失败 会中人数小于等于2人、未开启视频、找不到用户、已经是焦点视频
     */
    HXMeetingFailCode_SpotlightFail,
    /*!
     @brief 30.会议焦点视频数量超过限制 最多9人
     */
    HXMeetingFailCode_SpotlightLimet,
    /*!
     @brief 31.本地锁定视频失败 有焦点视频不能锁定会议
     */
    HXMeetingFailCode_LockedVideoFailHasSpotlight,
    /*!
     @brief 32.本地锁定视频数量超过限制 最多9人
     */
    HXMeetingFailCode_LockedVideoFailLimt,
    /*!
     @brief 33.会议成员没有权限
     */
    HXMeetingFailCode_MeetingMemNoPermission,
    /*!
     @brief 34.会议成员不存在
     */
    HXMeetingFailCode_MeetingMemNotExist,
    /*!
     @brief 35.会议成员被禁止加入本次会议
     */
    HXMeetingFailCode_MeetingMemForbindJoin,
    /*!
     @brief 36.数据丢失或损坏
     */
    HXMeetingFailCode_DataLossOrDamage,
    /*!
     @brief 37.网络异常
     */
    HXMeetingFailCode_NetError,
    /*!
     @brief 38.鉴权失败
     */
    HXMeetingFailCode_Forbidden,
    /*!
     @brief 39.超出有效范围
     */
    HXMeetingFailCode_OutOfRange,
    /*!
     @brief 40.媒体网络错误
     */
    HXMeetingFailCode_MediaNetworkErr,
    /*!
     @brief 41.主持人有另一场会议正在进行中，请等待主持人结束后再加入
     */
    HXMeetingFailCode_HostExistOtherMeet,
    
    /*!
     @brief 42.加入房间失败
     */
    HXMeetingFailCode_JoinRoomError,
    
    /*!
     @brief 90.未知错误
     */
    HXMeetingFailCode_Unknow = 90,
    
    /*!
     @brief 500.应用程序加入令牌错误
     */
    HXMeetingFailCode_AppPrivilegeTokenError = 500,
    
};

#pragma mark 会议结束原因
/*!
 @brief 会议结束原因
 */
typedef NS_ENUM(NSUInteger, HXMeetingEndReason){
    /*!
     @brief 0.用于初始化
     */
    HXMeetingEndReason_None = 0,
    /*!
     @brief 1.被主持人踢出会议室
     */
    HXMeetingEndReason_KickByHost,
    /*!
     @brief 2.被主持人结束会议
     */
    HXMeetingEndReason_EndByHost,
    /*!
     @brief 3.JBH超时
     */
    HXMeetingEndReason_JBHTimeOut,
    /*!
     @brief 4.没有与会者
     */
    HXMeetingEndReason_NoAttendee,
    /*!
     @brief 5.主持人开始另一个会议
     */
    HXMeetingEndReason_HostStartAnotherMeeting,
    /*!
     @brief 6.免费会议超时
     */
    HXMeetingEndReason_FreeMeetingTimeOut,
    /*!
     @brief 7.网络已断开
     */
    HXMeetingEndReason_NetworkBroken,
    /*!
     @brief 8.分组
     */
    HXMeetingEndReason_Group,
};

#pragma mark 连接质量
/*!
 @brief 连接质量
 */
typedef NS_ENUM(NSUInteger, HXMeetingConnectionQuality){
    /*!
     @brief 0.未知连接状态
     */
    HXMeetingConnectionQuality_Unknown = 0,
    /*!
     @brief 1.连接质量很差
     */
    HXMeetingConnectionQuality_VeryBad,
    /*!
     @brief 2.连接质量差
     */
    HXMeetingConnectionQuality_Bad,
    /*!
     @brief 3.连接质量不好
     */
    HXMeetingConnectionQuality_NotGood,
    /*!
     @brief 4.连接质量正常
     */
    HXMeetingConnectionQuality_Normal,
    /*!
     @brief 5.连接质量良好
     */
    HXMeetingConnectionQuality_Good,
    /*!
     @brief 6.连接质量非常好
     */
    HXMeetingConnectionQuality_Excellent,
};

#pragma mark 视频流质量模式
/*!
 @brief 视频流质量模式
 */
typedef NS_ENUM(NSUInteger, HXMeetingVideoStreamQualityMode){
    /*!
     @brief 0.普通模式
     */
    HXMeetingVideoStreamQualityMode_Normal = 0,
    /*!
     @brief 1.保帧率,流畅优先
     */
    HXMeetingConnectionQuality_MaintainFrame,
    /*!
     @brief 2.保分辨率,清晰优先
     */
    HXMeetingConnectionQuality_MaintainResolution,
    /*!
     @brief 3.平衡模式
     */
    HXMeetingConnectionQuality_Balanced,
};

#pragma mark 踢出会议类型
/*!
 @brief 踢出会议类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingKickoutType){
    /*!
     @brief 0.允许再次加入本场会议
     */
    HXMeetingKickoutType_NonPersistent = 0,
    /*!
     @brief 1.永久踢出本次会议
     */
    HXMeetingKickoutType_Persistent,
};

#pragma mark 提交信息类型
/*!
 @brief 提交信息类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingRequestType){
    HXMeetingRequestType_Post = 0,
    HXMeetingRequestType_Get,
    HXMeetingRequestType_Delete,
    HXMeetingRequestType_Put,
};

#pragma mark 离开会议类型会议类型
/*!
 @brief 离开会议类型
 */
typedef NS_ENUM(NSUInteger, HXLeaveMeetingType){
    /*!
     @brief 0.离开会议
     */
    HXLeaveMeetingType_Leave = 0,
    /*!
     @brief 1.会议结束
     */
    HXLeaveMeetingType_End,
    /*!
     @brief 8.离开分组会议
     */
    HXLeaveMeetingType_Group = 8,
    /*!
     @brief 网络异常断开
     */
    HXLeaveMeetingType_NetWorkDisconnection,
};

#pragma mark 聊天消息类型
/*!
 @brief 聊天消息类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingChatMessageType){
    /*!
     @brief 0.初始化/未分配
     */
    HXMeetingChatMessageType_None = 0,
    /*!
     @brief 1.聊天消息发送给所有人
     */
    HXMeetingChatMessageType_All,
    /*!
     @brief 2.聊天消息发送给单个参会者
     */
    HXMeetingChatMessageType_Individual,
    /*!
     @brief 3.聊天消息发送给等候室用户
     */
    HXMeetingChatMessageType_WaitingRoomUsers,
    
    /*!
     @brief 4.聊天消息发送给等待室单人
     */
    HXMeetingChatMessageType_WaitingRoomIndividual,
};

#pragma mark 消息类型
/*!
 @brief 消息类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingMessageType){
    /*!
     @brief 0.无
     */
    HXMeetingMessageType_None = 0,
    /*!
     @brief 1.文本消息
     */
    HXMeetingMessageType_Text,
};


#pragma mark H.323设备类型。
/*!
 @brief H.323设备类型。
 */
typedef NS_ENUM(NSUInteger, HXMeetingH323DeviceType){
    /*!
     @brief 0.无
     */
    HXMeetingH323DeviceType_None = 0,
    /*!
     @brief 1.H.323 设备
     */
    HXMeetingH323DeviceType_H323,
    /*!
     @brief 2.SIP 设备
     */
    HXMeetingH323DeviceType_Sip,
    /*!
     @brief 3.H.323 和 SIP 设备
     */
    HXMeetingH323DeviceType_Both,
};

#pragma mark H.323外呼状态
/*!
 @brief H.323外呼状态。
 */
typedef NS_ENUM(NSUInteger, HXMeetingH323CalloutStatus){
    /*!
     @brief 0.无
     */
    HXMeetingH323CalloutStatus_None = 0,
    /*!
     @brief 1.外呼成功
     */
    HXMeetingH323CalloutStatus_Success,
    /*!
     @brief 2.呼叫振铃中
     */
    HXMeetingH323CalloutStatus_Ring,
    /*!
     @brief 3.呼叫超时
     */
    HXMeetingH323CalloutStatus_Timeout,
    /*!
     @brief 4.呼叫失败
     */
    HXMeetingH323CalloutStatus_Failed,
    /*!
     @brief 5.呼叫繁忙
     */
    HXMeetingH323CalloutStatus_Busy,
    /*!
     @brief 6.呼叫拒绝
     */
    HXMeetingH323CalloutStatus_Decline,
};

#pragma mark H.323匹配状态
/*!
 @brief H.323匹配状态
 */
typedef NS_ENUM(NSUInteger, HXMeetingH323ParingResult){
    /*!
     @brief 0.无
     */
    HXMeetingH323ParingResult_None = 0,
    /*!
     @brief 1.匹配成功
     */
    HXMeetingH323ParingResult_Success,
    /*!
     @brief 2.正在匹配的会议不存在
     */
    HXMeetingH323ParingResult_MeetingNotExist,
    /*!
     @brief 3.匹配代码不存在
     */
    HXMeetingH323ParingResult_CedeNotExist,
    /*!
     @brief 4.没有匹配权限
     */
    HXMeetingH323ParingResult_NoPrivilege,
    /*!
     @brief 5.其它错误
     */
    HXMeetingH323ParingResult_OtherError,
};























#pragma mark 会议统计信息警告类型
/*!
 @brief 会议统计信息警告类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingStatisticsWarningType){
    /*!
     @brief 0.无警告
     */
    HXMeetingStatisticsWarningType_None = 0,
    /*!
     @brief 1.网络连接质量不好
     */
    HXMeetingStatisticsWarningType_NetworkQualityBad,
    /*!
     @brief 2.系统正忙
     */
    HXMeetingStatisticsWarningType_BusySystem,
};


#pragma mark 聊天消息删除类型
/*!
 @brief 聊天消息删除类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingChatDeleteType){
    /*!
     @brief 0.无
     */
    HXMeetingChatDeleteType_None = 0,
    /*!
     @brief 1.自己删除
     */
    HXMeetingChatDeleteType_Self,
    /*!
     @brief 2.主持人删除
     */
    HXMeetingChatDeleteType_Host,
};


#pragma mark 测试麦克风状
/*!
 @brief 测试麦克风状
 */
typedef NS_ENUM(NSUInteger, HXMeetingTestMicStatus){
    /*!
     @brief 0.通过TestMicStartRecording测试麦克风。在这种状态下调用TestMicStopTesting/TestMicPlayRecording是没有用的。
     */
    HXMeetingTestMicStatus_None = 0,
    /*!
     @brief 1.通过TestMicStopTesting/TestMicPlayRecording测试麦克风。在这种状态下调用TestMicStartRecording是没有用的。
     */
    HXMeetingTestMicStatus_MicRecording,
    /*!
     @brief 2.通过TestMicStopTesting/TestMicPlayRecording测试麦克风。在这种状态下调用TestMicStartRecording是无用的。
     */
    HXMeetingTestMicStatus_CanPlay,
};


#pragma mark 回声消除级别
/*!
 @brief 回声消除级别
 */
typedef NS_ENUM(NSUInteger, HXMeetingEchoCancellationLevel){
    /*!
     @brief 0.自动
     */
    HXMeetingEchoCancellationLevel_default = 0,
    /*!
     @brief 1.加强
     */
    HXMeetingEchoCancellationLevel_Aggressive,
    
};

#pragma mark 回声消除级别
/*!
 @brief 回声消除级别
 */
typedef NS_ENUM(NSUInteger, HXMeetingSuppressBackgroundNoiseLevel){
    /*!
     @brief 0.关闭
     */
    HXMeetingSuppressBackgroundNoiseLevel_None = 0,
    /*!
     @brief 1.自动
     */
    HXMeetingSuppressBackgroundNoiseLevel_Auto,
    /*!
     @brief 2.低(微弱的背景音)
     */
    HXMeetingSuppressBackgroundNoiseLevel_Low,
    /*!
     @brief 3.适中(电脑风扇声)
     */
    HXMeetingSuppressBackgroundNoiseLevel_Medium,
    /*!
     @brief 4.高(打字音、说话音)
     */
    HXMeetingSuppressBackgroundNoiseLevel_High,
    
};

#pragma mark 预览视频旋转动作
/*!
 @brief 预览视频旋转动作
 */
typedef NS_ENUM(NSUInteger, HXMeetingPreviewVideoRotationAction){
    /*!
     @brief 0.无旋转
     */
    HXMeetingPreviewVideoRotationAction_None = 0,
    /*!
     @brief 1.顺时针旋转90度
     */
    HXMeetingPreviewVideoRotationAction_Clock90,
    /*!
     @brief 2.顺时针旋转180度
     */
    HXMeetingPreviewVideoRotationAction_Clock180,
    /*!
     @brief 3.逆时针旋转90度
     */
    HXMeetingPreviewVideoRotationAction_AntiClock90,
};


#pragma mark 视频源尺寸
/*!
 @brief 视频源尺寸
 */
typedef NS_ENUM(NSUInteger, HXVideoRenderResolution){
    /*!
     @brief 0.无
     */
    HXVideoRenderResolution_None = 0,
    /*!
     @brief 1.90P
     */
    HXVideoRenderResolution_90P,
    /*!
     @brief 2.180P
     */
    HXVideoRenderResolution_180P,
    /*!
     @brief 3.360P
     */
    HXVideoRenderResolution_360P,
    /*!
     @brief 4.720P
     */
    HXVideoRenderResolution_720P,
    /*!
     @brief 5.1080P
     */
    HXVideoRenderResolution_1080P
};


#pragma mark 视频渲染类型
/*!
 @brief 视频渲染类型
 */
typedef NS_ENUM(NSUInteger, HXVideoRenderElementType){
    /*!
     @brief 0.无
     */
    HXVideoRenderElementType_None = 0,
    /*!
     @brief 1.本地视频预览
     */
    HXVideoRenderElementType_Prview,
    /*!
     @brief 2.活动视频
     */
    HXVideoRenderElementType_Active,
    /*!
     @brief 3.普通视频
     */
    HXVideoRenderElementType_Normal,
};

#pragma mark 视频源尺寸
/*!
 @brief 视频源尺寸
 */
typedef NS_ENUM(NSUInteger, HXVideoSubscribeLimit){
    /*!
     @brief 0.无
     */
    HXVideoSubscribeLimit_None = 0,
    /*!
     @brief 1.720P
     */
    HXVideoSubscribeLimit_720P,
    /*!
     @brief 2.960P
     */
    HXVideoSubscribeLimit_960P,
    /*!
     @brief 3.1080P
     */
    HXVideoSubscribeLimit_1080P,
    /*!
     @brief 4.2k
     */
    HXVideoSubscribeLimit_2K,
    /*!
     @brief 5.4K
     */
    HXVideoSubscribeLimit_4K,
    /*!
     @brief 6.8K
     */
    HXVideoSubscribeLimit_8K,
};

#pragma mark 视频订阅失败原因
/*!
 @brief 视频订阅失败原因
 */
typedef NS_ENUM(NSUInteger, HXVideoSubscribeFailReason){
    /*!
     @brief 0.无
     */
    HXVideoSubscribeFailReason_None = 0,
    /*!
     @brief 1.位置会议中
     */
    HXVideoSubscribeFailReason_NotInMeeting,
    /*!
     @brief 2.超过订阅限制
     */
    HXVideoSubscribeFailReason_HasSubscribeExceededLimt,
    /*!
     @brief 3.未知错误
     */
    HXVideoSubscribeFailReason_Unknown,
    /*!
     @brief 4.SDK2
     */
    HXVideoSubscribeFailReason_SDK2,
};

#pragma mark 新聊天消息通知方式
/*!
 @brief 新聊天消息通知方式
 */
typedef NS_ENUM(NSUInteger, HXNewMessageNotificationType){
    /*!
     @brief 0.弹幕
     */
    HXNewMessageNotificationType_Barrage = 0,
    /*!
     @brief 1.气泡
     */
    HXNewMessageNotificationType_Blister,
};






#pragma mark 降低背景噪音级别
/*!
 @brief 降低背景噪音级别
 */
typedef NS_ENUM(NSUInteger, HXSuppressBackgroundNoiseLevel){
    /*!
     @brief 0.关闭
     */
    HXSuppressBackgroundNoiseLevel_None = 0,
    /*!
     @brief 1.自动
     */
    HXSuppressBackgroundNoiseLevel_Auto,
    /*!
     @brief 2.低(微弱的背景音)
     */
    HXSuppressBackgroundNoiseLevel_Low,
    /*!
     @brief 3.中(电脑风扇声)
     */
    HXSuppressBackgroundNoiseLevel_Medium,
    /*!
     @brief 4.高(打字音、说话音)
     */
    HXSuppressBackgroundNoiseLevel_High,
};

#pragma mark 外观主题类型
/*!
 @brief 外观主题类型
 */
typedef NS_ENUM(NSUInteger, HXClientSkinType){
    /*!
     @brief 0.无
     */
    HXClientSkinType_None = 0,
    /*!
     @brief 1.跟随系统
     */
    HXClientSkinType_System,
    /*!
     @brief 2.浅色模式
     */
    HXClientSkinType_White,
    /*!
     @brief 3.深色外观
     */
    HXClientSkinType_Black,
};

#pragma mark 回声消除级别
/*!
 @brief 回声消除级别
 */
typedef NS_ENUM(NSUInteger, HXEchoCancellationLevel){
    /*!
     @brief 0.关闭
     */
    HXEchoCancellationLevel_None = 0,
    /*!
     @brief 1.自动
     */
    HXEchoCancellationLevel_Auto,
    /*!
     @brief 2.加强
     */
    HXEchoCancellationLevel_Aggressive,
};

#pragma mark 调整以适应弱光环境
/*!
 @brief 调整以适应弱光环境
 */
typedef NS_ENUM(NSUInteger, HXVideoLightAdaptionType){
    /*!
     @brief 0.关闭
     */
    HXVideoLightAdaptionType_None = 0,
    /*!
     @brief 1.自动
     */
    HXVideoLightAdaptionType_auto,
    /*!
     @brief 2.手动
     */
    HXVideoLightAdaptionType_Manual,
};

#pragma mark 屏幕名称文字大小
/*!
 @brief 屏幕名称文字大小
 */
typedef NS_ENUM(NSUInteger, HXScreenNameFontSize){
    /*!
     @brief 0.无尺寸
     */
    HXScreenNameFontSize_None = 0,
    /*!
     @brief 1.默认
     */
    HXScreenNameFontSize_Default,
    /*!
     @brief 2.大
     */
    HXScreenNameFontSize_Big,
};

#pragma mark 开启硬件加速
/*!
 @brief 开启硬件加速
 */
typedef NS_ENUM(NSUInteger, HXVideoHardwareEncodeType){
    /*!
     @brief 0.为编码使用硬件加速
     */
    HXVideoHardwareEncodeType_Encode = 0,
    /*!
     @brief 1.为解码使用硬件加速
     */
    HXVideoHardwareEncodeType_Decode,
    /*!
     @brief 2.以视频超分优化我接受的视频分辨率
     */
    HXVideoHardwareEncodeType_Rtx,
    /*!
     @brief 3.低码高清
     */
    HXVideoHardwareEncodeType_Lbhdmi
};

#pragma mark 网络检测数据类型
/*!
 @brief 网络检测数据类型
 */
typedef NS_ENUM(NSUInteger, HXDetectingNetworkType){
    /*!
     @brief 0.网络权限状态
     */
    HXDetectingNetworkType_Na = 0,
    /*!
     @brief 1.网络权限状态
     */
    HXDetectingNetworkType_Nc,
    /*!
     @brief 2.服务器连接情况
     */
    HXDetectingNetworkType_Sc,
    /*!
     @brief 3.域名解析耗时
     */
    HXDetectingNetworkType_DnsMs,
    /*!
     @brief 4.连接耗时耗时
     */
    HXDetectingNetworkType_CMs,
};


#pragma mark 音频模式与配置
/*!
 @brief 音频模式与配置
 */
typedef NS_ENUM(NSUInteger, HXAudioModeAndConfigure){
    /*!
     @brief 0.会议音频优化模式
     */
    HXAudioModeAndConfigure_Audio = 0,
    /*!
     @brief 1.音乐家原声模式
     */
    HXAudioModeAndConfigure_Musician,
    /*!
     @brief 2.增强我的声音并抑制背景噪音
     */
    HXAudioModeAndConfigure_RiseAndEchocancellation,
};

#pragma mark 回应类型
/*!
 @brief 回应类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingReplyType){
    /*!
     @brief 0.鼓掌
     */
    HXMeetingReplyType_Clap = 0,
    /*!
     @brief 1.赞
     */
    HXMeetingReplyType_Praise,
    /*!
     @brief 2.爱心
     */
    HXMeetingReplyType_Heart,
    /**
     @brief 3.笑哭
     */
    HXMeetingReplyType_Crying,

    /**
     @brief 4.问号
     */
    HXMeetingReplyType_QuestionMark,
    /**
     @brief 5.礼花
     */
    HXMeetingReplyType_FireworksDisplay,
    
};

#pragma mark 共享类型
/*!
 @brief 共享类型
 */
typedef NS_ENUM(NSUInteger, HXShareType){
    HXShareType_Init,                      // 0.INIT：初始化/未共享
    HXShareType_App,                       // 1.APP：共享应用程序
    HXShareType_Desktop,                   // 2.DESKTOP：共享桌面；
    HXShareType_WhiteBoard,                // 3.WHITE_BOARD：共享白板；
    HXShareType_Frame,                     // 4.FRAME：共享部分屏幕
    HXShareType_SecondCamera,              // 5.SECOND_CAMERA：共享第二摄像头
    HXShareType_Airplay,                   // 6.AIRPLAY
    HXShareType_PureComputerAudio,         // 7.PURE_COMPUTER_AUDIO：仅共享音频
};

#pragma mark SDK视图类型、主显示器和辅助显示器。
/*!
 @brief SDK视图类型、主显示器和辅助显示器。
 */
typedef NS_ENUM(NSUInteger, HXSDKViewType){
    HXSDKViewType_First,                        // 主屏显示
    HXSDKViewType_Second,                       // 辅助显示器
};


#pragma mark 优化共享视频
/*!
 @brief 优化共享视频
 */
typedef NS_ENUM(NSUInteger, HXOptimizeSharedMode){
    HXOptimizeSharedMode_Auto,                           // 自动检测
    HXOptimizeSharedMode_Fluency,                        // 流畅度优先
    HXOptimizeSharedMode_Resolution,                     // 清晰度度优先
    HXOptimizeSharedMode_Balance,                        // 平衡模式

};

#pragma mark 共享视图布局
/*!
 @brief 共享视图布局
 */
typedef NS_ENUM(NSUInteger, HXSharedLayoutMode){
    HXSharedLayoutMode_OnlyShared,                           // 只显示共享内容
    HXSharedLayoutMode_MyVideoOn,                            // 将我显示在共享内容的上面
    HXSharedLayoutMode_MyVideoNearby,                        // 将我显示在共享内容旁边
};

#pragma mark 共享状态
/*!
 @brief 共享状态
 */
typedef NS_ENUM(NSUInteger, HXSharingStatus){
    HXSharingStatus_Init,                                   // 0.初始化
    HXSharingStatus_SelfSendBegin,                          // 1.我开始共享
    HXSharingStatus_SelfSendEnd,                            // 2.我结束共享
    HXSharingStatus_OtherShareBegin,                        // 3.其他人开始共享
    HXSharingStatus_OtherShareEnd,                          // 4.其他人结束共享
    HXSharingStatus_ViewOtherSharing,                       // 5.观看其他人共享
    HXSharingStatus_Pause,                                  // 6.暂停共享
    HXSharingStatus_Resume,                                 // 7.恢复共享
};

#pragma mark 共享状态类型
/*!
 @brief 共享状态类型
 */
typedef NS_ENUM(NSUInteger, HXShareStatusType){
    HXShareStatusType_Init,                             // 0.INIT：初始化/未共享
    HXShareStatusType_Begin,                            // 1.开启
    HXShareStatusType_Pause,                            // 2.暂停
    HXShareStatusType_Resume,                           // 3.恢复
    HXShareStatusType_End,                              // 4.关闭

};

#pragma mark 是否可聊天结果
/*!
 @brief 是否可聊天结果
 */
typedef NS_ENUM(NSUInteger, HXCanSendChatResult){
    HXCanSendChatResult_OK,                                 // 0.可以聊天
    HXCanSendChatResult_Null,                               // 1.目标UUid不存在
    HXCanSendChatResult_Public,                             // 2.仅允许公开聊天且UUid非主持人、助理
    HXCanSendChatResult_Private,                            // 3.仅允许私聊主持人且UUid非主持人、助理
    HXCanSendChatResult_Disable,                            // 4.禁止聊天
    HXCanSendChatResult_WaitroomToAll,                      // 5.等待室禁止发给所有人
    HXCanSendChatResult_WaitroomToUnhost,                   // 6.等待室禁止发给非主持人
    HXCanSendChatResult_WaitroomToHost,                       // 7.禁止等待室私聊主持人（设置项）
    HXCanSendChatResult_Unknown                             // 8.未知错误
};





#pragma mark 电话扬声器类型
/*!
 @brief 电话扬声器类型
 */
typedef NS_ENUM(NSUInteger, HXMeetingPhoneSpeakerMode){
    HXMeetingPhoneSpeakerMode_Speaker,          // 0.扬声器
    HXMeetingPhoneSpeakerMode_Earphone,          // 1.耳机有线
    HXMeetingPhoneSpeakerMode_Receiver,          // 2.听筒
    HXMeetingPhoneSpeakerMode_Bluetooth,          // 3.蓝牙
    HXMeetingPhoneSpeakerMode_None,          // 4.无
    
};


#pragma mark - 私有
#pragma mark 白板画笔类型
typedef NS_ENUM(NSUInteger, HXCanvasShapeType){
    /*!
     @brief 0.笔
     */
    HXCanvasShapeType_Pen = 0,
    /*!
     @brief 1.线
     */
    HXCanvasShapeType_Line,
    /*!
     @brief 2.矩形
     */
    HXCanvasShapeType_Rectangle,
    /*!
     @brief 3.圆形
     */
    HXCanvasShapeType_Circle,
    /*!
     @brief 4.橡皮擦
     */
    HXCanvasShapeType_Eraser,
    /*!
     @brief 5.选择移动
     */
    HXCanvasShapeType_SelectMove,
    /*!
     @brief 6.实时笔(激光笔)
     */
    HXCanvasShapeType_TimelinessPe,
    /*!
     @brief 7.马克笔
     */
    HXCanvasShapeType_Mark,
    /*!
     @brief 8.单箭头线
     */
    HXCanvasShapeType_SingleArrowLine = 8,
    /*!
     @brief 9.双箭头线
     */
    HXCanvasShapeType_DoubleArrowLine,
    /*!
     @brief 10.三角形
     */
    HXCanvasShapeType_Triangle,
    /*!
     @brief 11.平行四边形
     */
    HXCanvasShapeType_Parallelogram,
    /*!
     @brief 12.五星
     */
    HXCanvasShapeType_FiveStar,
    /*!
     @brief 13.气泡
     */
    HXCanvasShapeType_Bubble,
    /*!
     @brief 14.单箭头形状
     */
    HXCanvasShapeType_SingleArrowShape,
    /*!
     @brief 15.双箭头形状
     */
    HXCanvasShapeType_DoubleArrowShape,
    /*!
     @brief 16.圆角矩形
     */
    HXCanvasShapeType_RoundedRectangle,
};


#pragma mark 白板画笔颜色
typedef NS_ENUM(NSUInteger, HXCanvasPenColorType){
    /*!
     @brief 0.红色
     */
    HXCanvasPenColorType_Red = 0,
    /*!
     @brief 1.橙色
     */
    HXCanvasPenColorType_Orange,
    /*!
     @brief 2.绿色
     */
    HXCanvasPenColorType_Green,
    /*!
     @brief 3.蓝色
     */
    HXCanvasPenColorType_Blue,
    /*!
     @brief 4.黑色
     */
    HXCanvasPenColorType_Black,
    
};

#pragma mark 白板画板宽度类型
typedef NS_ENUM(NSUInteger, HXCanvasPenWidthType){
    /*!
     @brief 0.细
     */
    HXCanvasPenWidthType_Fine = 0,
    /*!
     @brief 1.常规
     */
    HXCanvasPenWidthType_Normal,
    /*!
     @brief 2.粗
     */
    HXCanvasPenWidthType_Bold,
    /*!
     @brief 3.极粗
     */
    HXCanvasPenWidthType_ExtraBold
};


#pragma mark 白板背景颜色类型
typedef NS_ENUM(NSUInteger, HXCanvasColorType){
    /*!
     @brief 0.白色
     */
    HXCanvasColorType_white = 0,
    /*!
     @brief 1.黑色
     */
    HXCanvasColorType_Black,
    /*!
     @brief 2.绿色
     */
    HXCanvasColorType_Green,
};


#pragma mark 白板画板填充类型
typedef NS_ENUM(NSUInteger, HXCanvasPenFillType){
    /*!
     @brief 0.无
     */
    HXCanvasPenFillType_None = 0,
    /*!
     @brief 1.半透明
     */
    HXCanvasPenFillType_Translucency,
    /*!
     @brief 2.不透明
     */
    HXCanvasPenFillType_Fill,
};


#pragma mark 邀请类型

typedef NS_ENUM(NSUInteger, HXInviteType){
    /*!
     @brief 0.非预约普通用户
     */
    HXInviteType_Normal = 0,
    /*!
     @brief 1.预约未入会用户
     */
    HXInviteType_Reserve,
    /*!
     @brief 2.5G
     */
    HXInviteType_5G,
    /*
    @brief 3.SIP
    */
   HXInviteType_SIP,
    /*
    @brief 4.H323
    */
   HXInviteType_H323,
   /*!
    @brief 5.会议室Rooms
    */
   HXInviteType_MeetRooms,
};

//enum InviteStatus {
//    INVITE_STATUS_INIT = 0, // 未邀请
//    INVITE_STATUS_ING,      // 邀请中
//    INVITE_STATUS_CALL_FAIL,// 呼叫失败
//    INVITE_STATUS_REFUSE,   // 拒绝
//    INVITE_STATUS_TIMEOUT   // 超时未相应
//};

#pragma mark 邀请状态

typedef NS_ENUM(NSUInteger, HXInviteStatus){
    /*!
     @brief 0.未邀请
     */
    HXInviteStatus_Init = 0,
    /*!
     @brief 1.邀请中
     */
    HXInviteStatus_Ing,
    /*!
     @brief 2.呼叫失败
     */
    HXInviteStatus_CallFail,
    /*!
     @brief 3.拒绝
     */
    HXInviteStatus_Refuse,
    /*!
     @brief 4.超时未相应
     */
    HXInviteStatus_TimeOut,
};

#pragma mark 5G邀请类型
typedef NS_ENUM(NSUInteger, HXInviteTelType){
    
    HXInviteTelType_Audio = 1,    // 音频通话
    
    HXInviteTelType_Video,    // 视频通话
};

#pragma mark 注释权限
typedef NS_ENUM(NSUInteger, HXAnnotationAuth){
    /*!
     @brief 0.主持人和白板发起人可注释
     */
    HXAnnotationAuth_Admin = 0,
    /*!
     @brief 1.所有人可注释
     */
    HXAnnotationAuth_All,
};

#pragma mark 解锁注释权限
typedef NS_ENUM(NSUInteger, HXUnlockAnnotationAuth){
    /*!
     @brief 0.仅绘制该注释的成员、主持人和白板发起人
     */
    HXUnlockAnnotationAuth_Admin = 0,
    /*!
     @brief 1.有注释权限的成员
     */
    HXUnlockAnnotationAuth_AnnotationAuth,
};

#pragma mark 共享白板权限
typedef NS_ENUM(NSUInteger, HXShareWhiteboardPriviledgeType){
    /*!
     @brief 0.共享白板（仅主持人）           额外共享白板（仅主持人）
     */
    HXShareWhiteboardPriviledgeType_Host_Host = 0,
    /*!
     @brief 1.共享白板（主持人、助理主持人）   额外共享白板（主持人、助理主持人）
     */
    HXShareWhiteboardPriviledgeType_AllHost_AllHost,
    /*!
     @brief 2.共享白板（所有人）             额外共享白板（主持人、助理主持人）
     */
    HXShareWhiteboardPriviledgeType_All_AllHost,
    /*!
     @brief 3.共享白板（所有人）             额外共享白板（所有人）
     */
    HXShareWhiteboardPriviledgeType_All_All,
};

#pragma mark 不能共享原因 (通过 sdk3 CanNotStartShareReason +1 实现)
typedef NS_ENUM(NSUInteger, HXCanNotStartShareReason){
    /*!
     @brief 0.允许
     */
    HXCanNotStartShareReason_Allow = 0,
    /*!
     @brief 1.我已经发起共享了
     */
    HXCanNotStartShareReason_IShared,
    /*!
     @brief 2.当发起非白板时，已经存在白板（白板非白板冲突）
     */
    HXCanNotStartShareReason_ExistWB,
    /*!
     @brief 3.当发起白板时，已经存在非白板（白板非白板冲突）
     */
    HXCanNotStartShareReason_ExistUnWB,
    /*!
     @brief 4.主持人不允许你发起共享
     */
    HXCanNotStartShareReason_UnAdmin,
    /*!
     @brief 5.主持人不允许你发起第二路共享
     */
    HXCanNotStartShareReason_ExistShare,
};

#pragma mark 美颜算法级别
typedef NS_ENUM(NSUInteger, HXBeautyAlgorithmLevel){
    /*!
     @brief 1：低级
     */
    HXBeautyAlgorithmLevel_Low = 1,
    /*!
     @brief 2：中级
     */
    HXBeautyAlgorithmLevel_Middle,
    /*!
     @brief 3：高级
     */
    HXBeautyAlgorithmLevel_High,
};


#pragma mark 计时器状态
typedef NS_ENUM(NSUInteger, HXTimerStatus){
    /*!
     @brief 0：未开启
     */
    HXTimerStatus_Init = 0,
    /*!
     @brief 1：运行中
     */
    HXTimerStatus_running,
    /*!
     @brief 2：暂停中
     */
    HXTimerStatus_Pauseing,
};

#pragma mark 计时器计时类型
typedef NS_ENUM(NSUInteger, HXTimerTimingType){
    /*!
     @brief 1：倒计时
     */
    HXTimerTimingType_Down = 1,
    /*!
     @brief 2：正计时
     */
    HXTimerTimingType_Up,
};

#pragma mark 白板操作类型
typedef NS_ENUM(NSUInteger, HXWhiteboardAction){
    /*!
     @brief 1: 创建白板页
     */
    HXWhiteboardAction_Create = 1,
    /*!
     @brief 2: 销毁白板页
     */
    HXWhiteboardAction_Destory,
    /*!
     @brief 3: 白板页改名
     */
    HXWhiteboardAction_ChangeName,
    /*!
     @brief 4: 切换白板页
     */
    HXWhiteboardAction_SelectPage,
    
    
};

#pragma mark 清除白板范围
typedef NS_ENUM(NSUInteger, HXClearWhiteBoardType){
    /*!
     @brief 0:清除发起者所有
     */
    HXClearWhiteBoardType_MasterAll,
    /*!
     @brief 1: 清除协作者所有
     */
    HXClearWhiteBoardType_SlaveAll,
    /*!
     @brief 2: 清除所有
     */
    HXClearWhiteBoardType_All,
};


#pragma mark 会前websocket消息类型
typedef NS_ENUM(NSUInteger, HXBeforeMeetWebsocketType){
    
    /*!
     @brief 0:空;
     */
    HXBeforeMeetWebsocketType_None,
    /*!
     @brief 1:用户名修改，包括user_name和real_name;
     */
    HXBeforeMeetWebsocketType_UserName,
    /*!
     @brief 2: 用户头像修改
     */
    HXBeforeMeetWebsocketType_UserAvatar,
    /*!
     @brief 3: 预约会议开始
     */
    HXBeforeMeetWebsocketType_OrderStart,
};

