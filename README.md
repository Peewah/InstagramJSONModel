InstagramJSONModel-iOS
======================

A complete InstagramModel to work with [JSONModel](https://github.com/icanzilb/JSONModel) in iOS. You can get the info from Instagram in objects with this classes and [JSONModel](https://github.com/icanzilb/JSONModel).

Installation
======================
Add [JSONModel](https://github.com/icanzilb/JSONModel) to your project and then add classes of this repo to your project.

How to use
======================
This example was done with [AFNetworking](https://github.com/AFNetworking/AFNetworking)

```objc
-(void)loadInstagramInfo
{
    // 1. createRequest
    NSString *string = [NSString stringWithFormat:@"%@", BaseURLString];
    NSURL *url = [NSURL URLWithString:string];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    
    // 2. Do request
    AFHTTPRequestOperation *operation = [[AFHTTPRequestOperation alloc] initWithRequest:request];
    operation.responseSerializer = [AFJSONResponseSerializer serializer];
    [operation setCompletionBlockWithSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
        
        NSError *err = nil;
        NSDictionary *dictionary = (NSDictionary*)responseObject;
		//** Important part - Now all the information from Instagram is on TagPicturesInstagram object
        self.pictures = [[TagPicturesInstagram alloc]initWithDictionary:dictionary error:&err];        
    } failure:^(AFHTTPRequestOperation *operation, NSError *error)
     {
         NSLog(@"Error loading info");
     }];
    
    [operation start];
}
```
