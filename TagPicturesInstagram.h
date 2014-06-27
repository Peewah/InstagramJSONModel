//
//  TagPicturesInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "PictureInstagram.h"
#import "MetaInstagram.h"
#import "PaginationInstagram.h"

@interface TagPicturesInstagram : JSONModel
@property (strong,nonatomic) NSArray<PictureInstagram> *data;
@property (strong,nonatomic) MetaInstagram *meta;
@property (strong,nonatomic) PaginationInstagram *pagination;
@end
