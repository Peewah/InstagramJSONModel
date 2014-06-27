//
//  LocationInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"

@interface LocationInstagram : JSONModel
@property (assign,nonatomic) int id;
@property (assign,nonatomic) double latitude;
@property (assign,nonatomic) double longitude;
@property (strong,nonatomic) NSString<Optional> *name;
@end
