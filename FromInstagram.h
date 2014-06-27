//
//  FromInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"

@protocol FromInstagram
@end

@interface FromInstagram : JSONModel
@property (strong,nonatomic) NSString *full_name;
@property (strong,nonatomic) NSString *id;
@property (strong,nonatomic) NSString *profile_picture;
@property (strong,nonatomic) NSString *username;
@end
