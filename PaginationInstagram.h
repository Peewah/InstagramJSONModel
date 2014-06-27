//
//  PaginationInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"

@interface PaginationInstagram : JSONModel
@property (strong,nonatomic) NSString<Optional> *next_max_tag_id;
@property (strong,nonatomic) NSString<Optional> *deprecation_warning;
@property (strong,nonatomic) NSString<Optional> *next_max_id;
@property (strong,nonatomic) NSString<Optional> *next_min_id;
@property (strong,nonatomic) NSString<Optional> *min_tag_id;
@property (strong,nonatomic) NSString<Optional> *next_url;
@end
