//
//  ImagesInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "ImgInstagram.h"

@interface ImagesInstagram : JSONModel
@property (strong,nonatomic) ImgInstagram *low_resolution;
@property (strong,nonatomic) ImgInstagram *standard_resolution;
@property (strong,nonatomic) ImgInstagram *thumbnail;
@end
