//
//  ImgInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"

@protocol ImgInstagram
@end

@interface ImgInstagram : JSONModel
@property (assign,nonatomic) double height;
@property (strong,nonatomic) NSString *url;
@property (assign,nonatomic) double width;
@end
