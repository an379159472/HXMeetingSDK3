//
//  HXStatisticInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2025/1/8.
//

#import <Foundation/Foundation.h>

#import <HXMeetingSDK3/HXMeetingParam.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXStatisticInfoModel : NSObject

// 发送带宽
@property (nonatomic, copy) NSString *bandwidthSend;

// 接收带宽
@property (nonatomic, copy) NSString *bandwidthRecv;

// 网络类型
@property (nonatomic, copy) NSString *networkType;

// 代理地址
@property (nonatomic, copy) NSString *proxyAddr;

// 连接类型
@property (nonatomic, copy) NSString *connectionType;

// 数据中心
@property (nonatomic, copy) NSString *dataCenter;

// 加密
@property (nonatomic, copy) NSString *crypto;

// 版本
@property (nonatomic, copy) NSString *version;

@end

NS_ASSUME_NONNULL_END
