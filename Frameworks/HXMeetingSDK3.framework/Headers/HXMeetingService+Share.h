//
//  HXMeetingService+Share.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2024/11/19.
//

#import <HXMeetingSDK3/HXMeetingService.h>

@class HXShareInfoModel, HXShareItemInfoModel, HXMeetingUserInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Share)
#pragma mark 移动端专用共享
/**
 * 移动端专用共享
 * @param groupId  iOS groupId
 * @param isShareAuido 是否同时共享声音
 * @param exBndleId  屏幕录制 BndleId
 * @param width 录屏宽度
 * @param height 录屏高度
 * @param fps 录屏帧率
 * @return 结果
 */
- (BOOL)startRecordScreenWithGroupId:(NSString *)groupId IsShareAudio:(BOOL)isShareAuido ExBundleId:(NSString *)exBndleId Width:(int)width Height:(int)height Fps:(int)fps;

#pragma mark 开始白板共享
/**
* 开始白板共享
*/
- (BOOL)startWhiteBoardShare;

#pragma mark 停止白板共享
/**
 * 停止白板共享
 * @param isCloseAll  是否关闭全部
 * @return 结果
 */
- (BOOL)stopWhiteBoardShare:(BOOL)isCloseAll;

#pragma mark 停止共享
/**
 * 停止共享
 */
- (BOOL)stopShare;

#pragma mark 请求指定人的发起共享
/**
 * 请求指定人的发起共享
 * @param memuuid  会议成员id
 * @return 结果
 */
- (BOOL)requestStartShareWithMemuuid:(NSString *)memuuid;

#pragma mark 请求指定的人结束共享
/**
 * 请求指定的人结束共享
 * @param memuuid 会议成员id
 * @return 结果
 * 主持人/助理主持人
 */
- (BOOL)requestStopShareWithMemuuid:(NSString *)memuuid;

#pragma mark 暂停当前共享
/**
 * 暂停当前共享
 */
- (BOOL)pauseCurrentSharing;

#pragma mark 恢复当前共享
/**
 * 恢复当前共享
 */
- (BOOL)resumeCurrentSharing;

#pragma mark 获取当前会议中所有共享者的列表
/**
 * 获取当前会议中所有共享者的列表
 * @return  成员id 数组
 */
- (NSArray <NSString *>*)getViewableShareSourceList;

#pragma mark 判断是否能开启共享
/**
 * 判断是否能开启共享
 * @param isWhiteBoard 是否是白板
 * @return 结果
 */
- (HXCanNotStartShareReason)canStartShare:(BOOL)isWhiteBoard;

#pragma mark 确定是否支持共享计算机音频
/**
 * 确定是否支持共享计算机音频
 * @return true 支持 false 不支持
 */
- (BOOL)isSupportEnableShareComputerSound;

#pragma mark 设置开启共享计算机声音
/**
 * 设置开启共享计算机声音
 * @param enable yes：开启
 * @return  true 成功 false 失败
 */
- (BOOL)enableShareComputerSoundWithEnable:(BOOL)enable;

#pragma mark 查询是否有权限设置共享的选项
/**
 * 查询是否有权限设置共享的选项
 * @return true 有 false 无
 */
- (BOOL)canMultiShareSettingOptions;

#pragma mark 设置共享的选项
/**
 * 设置共享的选项
 * @param shareOption   共享设置类型。
 * @return  true 成功 false 失败
 */
- (BOOL)setMultiShareSettingOptions:(HXMeetingSharePriviledgeType)shareOption;

#pragma mark 获取共享选项设置
/**
 * 获取共享选项设置
 * @return  共享设置类型。
 */

- (HXMeetingSharePriviledgeType)getMultiShareSettingOptions;

#pragma mark 设置允许参会人共享屏幕
/**
 * 设置允许参会人共享屏幕
 * @param enable yes:允许
 * @return 结果
 */
- (BOOL)enableSharedScreen:(BOOL)enable;

#pragma mark 设置允许参会人共享屏幕
/**
 * 查询是否允许参会人共享屏幕
 * @return true 允许 false 禁止
 */
- (BOOL)isSharedScreenEnable;

#pragma mark 设置允许给共享内容添加注释
/**
 * 设置允许给共享内容添加注释
 * @param enable yes:允许
 * @return 结果
 */
- (BOOL)enableMarkToSharedScreen:(BOOL)enable;

#pragma mark 查询是否允许给共享内容添加注释
/**
 * 查询是否允许给共享内容添加注释
 * @return 结果
 */
- (BOOL)isMarkToSharedScreenEnable;

#pragma mark 设置允许参会人给白板添加注释
/**
 * 设置允许参会人给白板添加注释
 * @param enable yes:允许
 * @return 结果
 */
- (BOOL)enableMarkToSharedWhiteboard:(BOOL)enable;

#pragma mark 查询是否允许参会人给白板添加注释
/**
 * 查询是否允许参会人给白板添加注释
 * @return 结果
 */
- (BOOL)isMarkToSharedWhiteboardEnable;

#pragma mark 设置共享到分组
/**
 * 设置共享到分组
 * @param enable yes:允许
 * @return 结果
 */
- (BOOL)enableSharedToGroup:(BOOL)enable;

#pragma mark 获取是否共享到分组
/**
 * 获取是否共享到分组
 * @return 结果
 */
- (BOOL)isSharedToGroupEnable;

#pragma mark 有人发起了共享（不包含自己）
/**
 * 有人发起了共享（不包含自己）
 * @return true 有人发起了共享  false 无人发起共享
 */
- (BOOL)hasSharing;



#pragma mark 获取共享者列表
/**
 * 获取共享者列表
 * @return 结果
 */
- (NSArray <HXMeetingUserInfoModel *> *)getShareMemberList;



#pragma mark 设置共享白板的选项
/**
 * 设置共享白板的选项
 * @param whiteboardOption 共享白板权限
 * @return 结果
 */
- (BOOL)setMultiShareWhiteboardSettingOptions:(HXShareWhiteboardPriviledgeType)whiteboardOption;


#pragma mark 获取共享白板选项设置
/**
 * 获取共享白板选项设置
 * @return 共享白板权限
 */
- (HXShareWhiteboardPriviledgeType)getMultiShareWhiteboardSettingOptions;



#pragma mark 获取共享白板成员
/**
 * 获取共享白板成员
 * @return 结果
 */
- (NSArray <HXMeetingUserInfoModel *> *)getWhiteBoardMemberList;

#pragma mark - 未使用
/**
 * 共享指定的应用程序
 * @brief StartAppShare
 * @param hwnds      句柄列表
 * @return  true 成功 false 失败
 * 指定要共享的应用程序的窗口句柄列表。如果hwnds无法共享，则返回false。如果hwnds列表为空或内容为0，则将共享主屏幕桌面。
 */

- (BOOL)startAppShareWithHwnds:(NSArray *)hwnds;

/**
 * 共享指定的显示器桌面
 * @brief StartMonitorShare
 * @param monitorID monitorID指定要共享的桌面的屏幕id。
 * @return true 成功 false 失败
 */

- (BOOL)startMonitorShare:(NSString *)monitorID;

/**
 * 开始使用AirPlay协议投屏苹果设备共享
 * @brief StartAirPlayShare
 * @return  true 成功 false 失败
 */
- (BOOL)startAirPlayShare;

///**
// * 开始与白板共享
// * @brief StartWhiteBoardShare
// * @return  true 成功 false 失败
// */
//
//- (BOOL)startWhiteBoardShare;

/**
 * 开始共享部分屏幕
 * @brief StartShareFrame
 * @param monitorId 监视器的id
 * @param rect 共享屏幕局部信息结构
 * @return  true 成功 false 失败
 */

- (BOOL)startShareFrameWithMonitorId:(NSString *)monitorId rect:(HXShareRectModel *)rect;

/**
 * 开始仅共享计算机音频
 * @brief StartSharePureComputerAudio
 * @return  true 成功 false 失败
 */

- (BOOL)startSharePureComputerAudio;

/**
 * 开始共享摄像头
 * @brief StartShareCamera
 * @param deviceId 摄像头设备id
 * @return  true 成功 false 失败
 */

- (BOOL)startShareCameraWithDeviceId:(NSString *)deviceId;








/**
 * 观看指定用户的共享
 * @brief ViewShare
 * @param memUUid   指定用户的memUUid
 * @param type      指定主屏显示还是辅助屏幕显示
 * @return  true 成功 false 失败
 * 共享渲染中会根据设置的枚举返回对应的视频流，可根据SDKViewType进行对应的渲染
 */

- (BOOL)viewShareWithMemuuid:(NSString *)memuuid type:(HXSDKViewType)type;

/**
 * 获取指定的共享视频流的SDK视图类型
 * @brief GetViewType
 * @param memUUid
 * @return 详细见 \link SDKViewType \endlink
 */

- (HXSDKViewType)getViewTypeWithMemuuid:(NSString *)memuuid;










/**
 * 确定指定的摄像头是否能共享（空闲）
 * @brief CanSwitchShareCamera
 * @param deviceId 设备id
 * @return
 */

- (BOOL)canSwitchShareCameraWithDeviceId:(NSString *)deviceId;

/**
 * 选择指定色设备共享视频
 * @brief SwitchShareCamera
 * @param deviceId
 * @return
 */

- (BOOL)switchShareCameraWithDeviceId:(NSString *)deviceId;

/**
 * 获取共享信息列表
 * @brief GetShareList
 * @return
 * 接口不对移动设备开放
 */

- (NSArray <HXShareItemInfoModel *>*)getShareList;



/**
 * 设置启用/禁用 立体声
 * @brief EnableStereoAudio
 * @param enable
 * @return
 */
- (BOOL)enableStereoAudio:(BOOL)enable;

/**
 * 获取立体声的标志 启用/禁用
 * @brief IsStereoAudioEnable
 * @return
 */
- (BOOL)isStereoAudioEnable;

/**
 * 设置启用/禁用 HiFi高保真音乐
 * @brief EnableHighFidelityMusicMode
 * @param bEnable
 * @return
 */

- (BOOL)enableHighFidelityMusicMode:(BOOL)enable;


/**
 * 获取 HiFi高保真音乐 启用/禁用
 * @brief IsHighFidelityMusicModeEnabled
 * @return
 */

- (BOOL)isHighFidelityMusicModeEnabled;

/**
 * 设置优化共享视频
 * @brief SetOptimizeSharedMode
 * @param sharedMode
 * @return
 */

- (BOOL)setOptimizeSharedMode:(HXOptimizeSharedMode)mode;

/**
 * 获取优化共享视频设置
 * @brief GetOptimizeSharedMode
 * @return
 */
- (HXOptimizeSharedMode)getOptimizeSharedMode;

/**
 * 共享视图布局
 * @brief SetSharedLayoutMode
 * @return
 */

- (BOOL)setSharedLayoutMode:(HXSharedLayoutMode)mode;

/**
 * 获取共享视图布局
 * @brief GetSharedLayoutMode
 * @return
 */

- (HXSharedLayoutMode)getSharedLayoutMode;




@end

NS_ASSUME_NONNULL_END
