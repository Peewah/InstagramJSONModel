//
//  PictureInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "CaptionInstagram.h"
#import "CommentsInstagram.h"
#import "ImagesInstagram.h"
#import "LikesInstagram.h"
#import "UserInstagram.h"
#import "UserInPhoto.h"
#import "LocationInstagram.h"

@protocol PictureInstagram
@end

@interface PictureInstagram : JSONModel
@property (strong,nonatomic) NSString<Optional> *attribution;
@property (strong,nonatomic) CaptionInstagram *caption;
@property (strong,nonatomic) CommentsInstagram *comments;
@property (strong,nonatomic) NSString *created_time;
@property (strong,nonatomic) NSString *filter;
@property (strong,nonatomic) NSString *id;
@property (strong,nonatomic) ImagesInstagram *images;
@property (strong,nonatomic) LikesInstagram *likes;
@property (strong,nonatomic) NSString *link;
@property (strong,nonatomic) LocationInstagram<Optional> *location;
@property (strong,nonatomic) NSArray<Optional> *tags;
@property (strong,nonatomic) NSString *type;
@property (strong,nonatomic) UserInstagram *user;
@property (strong,nonatomic) NSArray<UserInPhoto> *users_in_photo;
//@property (assign,nonatomic) BOOL user_has_liked;
//@property (strong,nonatomic) NSString<Optional> *website;
@end
