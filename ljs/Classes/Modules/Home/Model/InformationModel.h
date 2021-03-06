//
//  InformationModel.h
//  ljs
//
//  Created by 蔡卓越 on 2018/3/12.
//  Copyright © 2018年 caizhuoyue. All rights reserved.
//

#import "BaseModel.h"

@interface InformationModel : BaseModel
//标题
@property (nonatomic, copy) NSString *title;
//时间
@property (nonatomic, copy) NSString *time;
//收藏数
@property (nonatomic, assign) NSInteger collectNum;
//缩略图
@property (nonatomic, copy) NSString *pic;
//
@property (nonatomic, strong) NSArray <NSString *>*pics;
//作者
@property (nonatomic, copy) NSString *author;
//来源
@property (nonatomic, copy) NSString *source;
//图文详情
@property (nonatomic, copy) NSString *desc;
//cellHeight
@property (nonatomic, assign) CGFloat cellHeight;

@end
