//
//  CaptionInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "FromInstagram.h"

@interface CaptionInstagram : JSONModel
@property (strong,nonatomic) NSString *created_time;
@property (strong,nonatomic) FromInstagram *from;
@property (strong,nonatomic) NSString *id;
@property (strong,nonatomic) NSString<Optional> *text;
@end
