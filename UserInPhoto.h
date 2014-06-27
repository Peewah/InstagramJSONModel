//
//  UserInPhoto.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "FromInstagram.h"
#import "PositionTagInstagram.h"

@protocol UserInPhoto
@end

@interface UserInPhoto : JSONModel
@property (strong,nonatomic) PositionTagInstagram *position;
@property (strong,nonatomic) FromInstagram *user;
@end
