//
//  HXHttpErrorModel.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*!
 @class HXHttpErrorModel
 @brief Http请求错误模型
 */
@interface HXHttpErrorModel : NSObject
/*!
 @brief 错误详情
 */
@property (nonatomic, strong) NSString *message;
/*!
 @brief 错误码
 */
@property (nonatomic, assign) int errcode;

+ (instancetype)modelFromJSONString:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END
