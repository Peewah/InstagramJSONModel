//
//  MetaInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"

@interface MetaInstagram : JSONModel
@property (assign,nonatomic) int code;
@property (strong,nonatomic) NSString<Optional> *error_type;
@property (strong,nonatomic) NSString<Optional> *error_message;
@end
