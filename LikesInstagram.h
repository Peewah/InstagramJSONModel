//
//  LikesInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "FromInstagram.h"

@interface LikesInstagram : JSONModel
@property (assign,nonatomic) int count;
@property (strong,nonatomic) NSArray<FromInstagram> *data;
@end
