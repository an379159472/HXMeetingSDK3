//
//  HXVirtualBGImageInfo.h
//  hxhy_phone_ui_ios
//
//  Created by sunhaiping on 2024/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXVirtualBGImageInfo : NSObject
/*!
 @brief 唯一标识
 */
@property (nonatomic, assign) int mainId;

/*!
 @brief 当前图片使用情况
 */
@property (nonatomic, assign) BOOL isSelected;

/*!
 @brief 确定当前图像可以从列表中删除
 */
@property (nonatomic, assign) BOOL isAllowDelete;

/*!
 @brief 获取bmp图片数据
 */
@property (nonatomic, strong) NSData * data;

/*!
 @brief 获取当前图像的名称
 */
@property (nonatomic, strong) NSString * imageName;
@end

NS_ASSUME_NONNULL_END
