//
//  HXIcoInfoModel.h
//  hxhy_phone_ui_ios
//
//  Created by 李继鹏 on 2024/11/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HXIcoInfoModel : NSObject

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

// ico argb数据
@property (nonatomic, strong) NSData *buffer;

@end

NS_ASSUME_NONNULL_END
