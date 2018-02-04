/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLICommand : NSObject {
    NSDictionary * _cachedOptionsDictionary;
    NSString * _name;
    NSArray * _options;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) NSDictionary *optionsDictionary;

- (void).cxx_destruct;
- (bool)containsOption:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (id)name;
- (id)options;
- (id)optionsDictionary;
- (id)valueForOption:(id)arg1;

@end
