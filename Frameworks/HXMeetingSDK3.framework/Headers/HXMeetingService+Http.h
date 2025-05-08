//
//  HXMeetingService+Http.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/3.
//

#import <HXMeetingSDK3/HXMeetingService.h>
#import <UIKit/UIKit.h>

@class HXMeetingInfoModel, HXMeetingParam, HXHttpErrorModel, HXMeetingCreateOrderMeetingModel,HXPersonalMeetingSettingsModel;
//有问题的model

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (Http)
#pragma mark 获取获取首页会议数据 （每页20条）
/*!
 * @brief 获取获取首页会议数据 （每页20条）
 * @param index 页码
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getMeetingHomeAllDataWithPageIndex:(int)index
                                  timezone:(NSString * )timezone
                                   Success:(void (^_Nullable)(NSString * result))success
                                   Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 通过会议id获取会议数据
/*!
 * @brief 通过会议id获取会议数据
 * @param meetingid 会议号
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getMeetingInfoWithMeetingId:(NSString * )meetingid
                            Success:(void (^_Nullable)(HXMeetingInfoModel * model))success
                            Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 创建预约会议
/*!
 * @brief 创建预约会议
 * @param json 预约会议模型
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)createOrderMeetingWithCreateJson:(NSString * )json
                                  Success:(void (^_Nullable)(NSString * result))success
                                  Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 修改预约会议
/*!
 * @brief 修改预约会议
 * @param json 预约会议模型
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)updateOrderMeetingWithCreateJson:(NSString * )json
                                  Success:(void (^_Nullable)(NSString * result))success
                                  Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;



#pragma mark 获取预约会议详情
/*!
 * @brief 获取预约会议详情
 * @param meetUuid 会议id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getOrderMeetingInfoWithMeetUuid:(NSString * )meetUuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 删除预约会议
/*!
 * @brief 删除预约会议
 * @param meetUuid 会议id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)deleteOrderMeetingWithMeetUuid:(NSString * )meetUuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取周期会议列表
/*!
 * @brief 获取周期会议列表
 * @param cycleId 周期id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getCycleMeetingAllDataWithCycleId:(NSString * )cycleId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 删除周期会议
/*!
 * @brief 删除周期会议
 * @param cycleId 周期id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)deleteCycleMeetingWithCycleId:(NSString * )cycleId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 修改周期会议
/*!
 * @brief 修改周期会议
 * @param json 预约会议模型
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)updateCycleMeetingWithJson:(NSString * )json
                            Success:(void (^_Nullable)(NSString * result))success
                            Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 修改单场周期会议
/*!
 * @brief 修改单场周期会议
 * @param meetUuid 会议id
 * @param orgId 企业id 默认：0
 * @param startTime  开始时间 "2022-01-01 10:10:10"
 * @param endTime  结束时间 "2022-01-01 10:10:10"
 * @param timezone 时区  "sh"
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)updateSingleCycleMeetingWithMeetUuid:(NSString * )meetUuid orgId:(NSInteger)orgId StartTime:(NSInteger)startTime EndTime:(NSInteger)endTime Timezone:(NSString *)timezone Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取时区列表
/*!
 * @brief 获取时区列表
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getTimeZoneAllDataWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 时区详情
/*! 
 * @brief 时区详情
  * @param timeKey 时区 key （Asia/Shanghai）
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getTimeZoneInfoWithTimeKey:(NSString * )timeKey Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 添加会议
/*!
 * @brief 添加会议
 * @param meetUuid 会议id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)addMeetingDataWithMeetUuid:(NSString *)meetUuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取参与会议列表
/*!
 * @brief 获取参与会议列表
 * @param pageIndex 页码
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)addMeetingDataWithPageIndex:(int)pageIndex Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 添加会议备注
/*!
 * @brief 添加会议备注
 * @param meetUuid 会议id
 * @param remark 备注
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)addMeetingRemarkWithMeetUuid:(NSString * )meetUuid Remark:(NSString *)remark Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取个人会议号设置项
/*!
 * @brief 获取个人会议号设置项
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getPersonalMeetingSettingsWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 更新个人会议号设置项
/*!
 * @brief 更新个人会议号设置项
 * @param datas 设置模型
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)updatePersonalMeetingSettingsWithSettingsModel:(NSDictionary * )datas  Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取默认会议设置项
/*!
 * @brief 获取默认会议设置项
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getDefaultMeetingSettingsWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取预约成员数据列表
/*!
 * @brief 获取预约成员数据列表
 * @param meetUuid 会议id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getOrderMeetingMemberWithMeetUuid:(NSString * )meetUuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 添加预约会议成员
/*!
 * @brief 添加预约会议成员
 * @param meetUuid 会议id
 * @param userIds 成员userid 数组
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)addOrderMeetingMemberWithMeetUuid:(NSString * )meetUuid UserIds:(NSArray<NSNumber *> *)userIds Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 保存预约会议成员
/*!
 * @brief 保存预约会议成员
 * @param meetUuid 会议id
 * @param userIds 成员userid 数组
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)saveOrderMeetingMemberWithMeetUuid:(NSString * )meetUuid UserIds:(NSArray<NSNumber *> *)userIds Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 删除预约会议成员
/*!
 * @brief 删除预约会议成员
 * @param meetUuid 会议id
 * @param userIds 成员userid 数组
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)deleteOrderMeetingMemberWithMeetUuid:(NSString * )meetUuid UserIds:(NSArray<NSNumber *> *)userIds Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 开始预约会议
/*!
 * @brief 开始预约会议
 * @param meet_uuid 会议标识
 * @param is_repeated 是否重新开始
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)startOrderMeetingWithMeet_uuid:(NSString * )meet_uuid is_repeated:(BOOL)is_repeated Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 根据手机号搜索企业外的成员
/*!
 * @brief 根据手机号搜索企业外的成员
 * @param phone 手机号
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)searchOrgOutMemberWithPhone:(NSString * )phone Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取全部分组模版
/*!
 * @brief 获取全部分组模版
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getAllGroupTemplateWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 会前获取分组模版详情
/*!
 * @brief 会前获取分组模版详情
 * @param templateId 分组模版Id
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getTemplateDetailsWithTemplateId:(NSInteger)templateId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取会议历史列表
/*!
 * @brief 获取会议历史列表
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getMeetHistorySuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取扫描会议二维码信息
/*!
 * @brief 获取扫描会议二维码信息
 * @param uuid 会议的uuid
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)getScanMeetResultWithUUid:(NSString * )uuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取扫描个人二维码信息
/*!
 * @brief 获取扫描个人二维码信息
 * @param userId 会议的userId
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)getScanPersonResultWithUserId:(NSString * )userId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 分享链接预约会议查询结果
/*!
 * @brief 分享链接预约会议查询结果
 * @param uuid 会议的uuid
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)getShareLinksOrderResultWithUUid:(NSString * )uuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取短信验证码
/*!
 * @brief 获取短信验证码
 * @param uTel 用户手机号
 * @param codeType 验证码类型 login: 登录场景| update_tel：修改手机号码| change_pwd: 修改密码
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)getSMSVerificationCodeWithuTel:(NSString * )uTel codeType:(NSString *)codeType Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 注册
/*!
 * @brief 注册
 * @param code 短信验证码
 * @param utel 手机号
 * @param areaCode 区号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)registerWithCode:(NSString * )code utel:(NSString * )utel areaCode:(NSString * )areaCode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 手机号码一键登录
/*!
 * @brief 手机号码一键登录
 * @param accessToken 会议的userId
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginWithAccessToken:(NSString * )accessToken Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 微信登录
/*!
 * @brief 微信登录
 * @param wxToken 会议的wxToken
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginWithWxToken:(NSString * )wxToken wxAppid:(NSString *)wx_appid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 短信验证码登录
/*!
 * @brief 短信验证码登录
 * @param code 短信验证码
 * @param utel 手机号
 * @param areaCode 区号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginWithCode:(NSString * )code utel:(NSString * )utel areaCode:(NSString *)areaCode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 密码登录
/*!
 * @brief 密码登录
 * @param password 密码
 * @param utel 手机号
 * @param areaCode 区号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginWithPassword:(NSString * )password utel:(NSString * )utel areaCode:(NSString *)areaCode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 生物识别登录
/*!
 * @brief 生物识别登录
 * @param utel 手机号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginWithUtel:(NSString * )utel Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark appleID登录
/*!
 * @brief appleID登录
 * @param idToken idToken
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)loginAppleIdWithIdToken:(NSString * )idToken Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 忘记密码登录
/*!
 * @brief 忘记密码登录
 * @param code 短信验证码
 * @param utel 手机号
 * @param areaCode 区号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)forgotPasswordWithCode:(NSString * )code password:(NSString * )password utel:(NSString * )utel areaCode:(NSString *)areaCode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 更新appToken
/*!
 * @brief 更新appToken
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)updataAppTokenWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 完善用户信息
/*!
 * @brief 完善用户信息
 * @param userName 用户名
 * @param password 密码
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)improvePersonInfoWithUserName:(NSString * )userName password:(NSString * )password Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 第三方登录绑定
/*!
 * @brief 第三方登录绑定
 * @param code 短信验证码
 * @param utel 手机号
 * @param areaCode 区号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)thirdBindWithCode:(NSString * )code thirdType:(NSString * )thirdType accessToken:(NSString * )accessToken openId:(NSString * )openId utel:(NSString * )utel areaCode:(NSString * )areaCode orgId:(NSNumber * )orgId ssoId:(NSNumber * )ssoId ssoType:(NSString * )ssoType Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取会议历史列表
/*!
 * @brief 获取会议历史列表
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getMeetHistoryPageIndex:(NSInteger)pageIndex
                       timezone:(NSString * )timezone
                      startTime:(NSString * )startTime
                        endTime:(NSString * )endTime
                     searchText:(NSString * )searchText
                        Success:(void (^_Nullable)(NSString * result))success
                        Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;
#pragma mark 获取历史会议详情

/*!
 * @brief 获取历史会议详情
 * @param uuid uuid名
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)getMeetHistoryDetailsWithUuid:(NSString * )uuid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取会议历史参会人

- (void)getMeetHistoryMemberListWithUuid:(NSString * )uuid PageIndex:(NSInteger)pageIndex Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取会议历史消息列表

- (void)getMeetHistoryChatListWithUuid:(NSString * )uuid PageIndex:(NSInteger)pageIndex Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取注销验证方式

- (void)getSignOutVerifyModeWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 微信验证
/*!
 * @brief 微信验证
 * @param wxToken 会议的wxToken
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)verifyWithWxToken:(NSString * )wxToken wxAppid:(NSString * )wx_appid Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 短信验证码验证
/*!
 * @brief 短信验证码验证
 * @param code 短信验证码
 * @param utel 手机号
 * @param success 成功回调
 * @param failure 失败回调
*/

- (void)verifyWithCode:(NSString * )code utel:(NSString * )utel Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 密码验证
- (void)verifyWithPassword:(NSString * )password utel:(NSString * )utel Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 更换手机号
- (void)changePhoneWithCode:(NSString * )code utel:(NSString * )utel areaCode:(NSString * )areaCode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 微信绑定

- (void)wxBindWithAccessToken:(NSString * )accessToken wxAppid:(NSString * )wx_appid isReplace:(BOOL)isReplace Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 解除微信绑定

- (void)wxUnBindWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 苹果ID绑定

- (void)appIdBindWithAccessToken:(NSString *)accessToken Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 登录设备列表

- (void)getLoginDeviceListWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 删除登录设备

- (void)deleteLoginDeviceWithMachineId:(NSString * )machineId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 退出登录

- (void)loginOutWithMachineId:(NSString * )machineId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 绑定企业Id

- (void)bindOrdIdWithOrgId:(NSInteger)orgId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 修改密码

- (void)changePasswordWithPassword:(NSString * )password code:(NSString * )code Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 注销

- (void)signOutWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取用户绑定信息

- (void)getUserBindInfoWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取sso登录列表（用于校验邮箱或域名是否合规）
- (void)verifySSOLoginParamsWithEmail:(NSString * )email domain:(NSString * )domain Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 反馈意见
/*!
 * @brief 反馈意见
 * @param feedbackType 反馈类型 1：视频会议
 * @param satisfaction 满意度
 * @param content 内容
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)feedbackWithFeedbackType:(NSInteger)feedbackType Satisfaction:(NSInteger)satisfaction Content:(NSString * )content Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 修改用户名

- (void)changeUserNameWithName:(NSString * )name Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 修改头像

- (void)changeAvatarWithAvatar:(NSString * )avatar Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 修改用户在线状态

- (void)changeOnLineStatusWithStatus:(NSInteger)status Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取用户注销权限

- (void)getSignOutPermissionWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 二维码登录
- (void)scanLoginWithParams:(NSString * )params Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取Tip提示详情

- (void)getTipContentWithIcode:(NSString * )icode Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取今天加入的会议

- (void)getTodayMeetingWithTimezone:(NSString * )timezone Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 查看进行中会议详情
- (void)getTodayMeetingDetailsWithMeetId:(NSString * )meetId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 获取默认头像列表
- (void)getDefaultAvatarListWithSuccess:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;


#pragma mark 获取账户信息
- (void)getAbilityListWithUserId:(NSString * )userId Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 上传图片
- (void)uploadImage:(UIImage * )image Success:(void (^_Nullable)(NSString * flieId))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 上传日志文件
- (void)uploadLog:(NSString * )day FromHour:(NSString * )fromHour ToHour:(NSString * )toHour Content:(NSString * )content FileSize:(void (^_Nullable)(NSString * size))fileSize Progress:(void (^_Nullable)(int vlaue))progress Success:(void (^_Nullable)(NSString * result))success Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;

#pragma mark 取消上传日志文件
- (void)cleanUploadLogFile;

#pragma mark 获取“i”提示
/*!
 * @brief 获取“i”提示
 * @param clientid   iphone = 16  ipad = 17
 * @param updateat  时间戳字符串
 * @param language  语言类型
 * @param success 成功回调
 * @param failure 失败回调
*/
- (void)getTipActionWithClientid:(NSString * )clientid
                        Updateat:(NSString * )updateat
                        Language:(NSString * )language
                         Success:(void (^_Nullable)(NSDictionary * jsonDict))success
                         Failure:(void (^_Nullable)(HXHttpErrorModel *errModel))failure;



#pragma mark 自动上传日志
- (void)uploadBuglyLog:(NSString *)str;
@end

NS_ASSUME_NONNULL_END
