//
//  HXTagBeautyParam.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXBeautyParam : NSObject
/*!
 @brief true 开启 false 关闭
 */
@property (nonatomic, assign) BOOL isEnable;
/*!
 @brief 磨皮 0关闭 100最大
 */
@property (nonatomic, assign) int grindingSkin;
/*!
 @brief 美白 0关闭 100最大
 */
@property (nonatomic, assign) int skinWhitening;
/*!
 @brief 腮红 0关闭 100最大
 */
@property (nonatomic, assign) int powderBlusher;
/*!
 @brief 瘦脸 0关闭 100最大
 */
@property (nonatomic, assign) int thinFace;

/*!
 @brief 大眼 0关闭 100最大
 */
@property (nonatomic, assign) int bigeyelevel;
@end

NS_ASSUME_NONNULL_END
