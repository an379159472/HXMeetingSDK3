//
//  HXMeetingService+H323.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/7/22.
//

#import <HXMeetingSDK3/HXMeetingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXMeetingService (H323)
//#pragma mark 获取当前会议支持的H.323呼入号码列表
///*!
//@brief 获取当前会议支持的H.323呼入号码列表
//@return 地址数组
//*/
//- (NSArray<NSString *> *)getH323Address;
//
//#pragma mark 获取当前会议的H.323密码
///*!
//@brief 获取当前会议的H.323密码
//@return 密码
//*/
//- (NSString *)getH323Password;
//
//#pragma mark 确定是否已启用匹配会议
///*!
//@brief 确定是否已启用匹配会议
//@param meetingId  会议号码
//@return yes：启用；no：禁用
//*/
//- (BOOL)canPairingMeetingWithMeetingId:(NSString *)meetingId;
//
//#pragma mark 发送会议匹配代码
///*!
//@brief 发送会议匹配代码
//@param meetingId  会议号码
//@param paringCode  匹配码
//@return yes：启用；no：禁用
//*/
//- (BOOL)sendMeetingParingCodeWithMeetingId:(NSString *)meetingId ParingCode:(NSString *)paringCode;
//
//#pragma mark 获取当前会议支持的呼叫设备的列表
///*!
//@brief 获取当前会议支持的呼叫设备的列表
//@return 设备模型数组
//*/
//- (NSArray<HXMeetingH323DeviceModel *>*)getCalloutH323DviceList;
//
//#pragma mark 使用指定的H.323设备呼叫
///*!
//@brief 使用指定的H.323设备呼叫
//@param model  设备模型
//@return yes：成功
//*/
//- (BOOL)callOutH323WithDeviceModel:(HXMeetingH323DeviceModel *)model;
//
//#pragma mark 取消当前呼出电话
///*!
//@brief 取消当前呼出电话
//@return yes：成功
//*/
//- (BOOL)cancelCallOutH323;
@end

NS_ASSUME_NONNULL_END
