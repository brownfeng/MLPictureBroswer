//
//  MLPicture.h
//
//
//  Created by molon on 14-1-14.
//  Copyright (c) 2014年 Molon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLPicture : NSObject

@property(nonatomic,assign) NSUInteger index;//序号
@property(nonatomic,strong) NSURL *url; //图片的网络地址
@property(nonatomic,assign) BOOL isLoaded; //是否已经加载过

@end
