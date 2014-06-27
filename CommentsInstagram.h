//
//  CommentsInstagram.h
//  FeriaDeCali2014ios
//
//  Created by Juan Camilo Sacanamboy on 24/06/14.
//  Copyright (c) 2014 Minimal. All rights reserved.
//

#import "JSONModel.h"
#import "CommentInstagram.h"

@interface CommentsInstagram : JSONModel
@property (assign,nonatomic) int count;
@property (strong,nonatomic) NSArray<CommentInstagram> *data;
@end
