/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKMovieClipAsset : NSObject {
    unsigned long long  _duration;
    NSString * _flavor;
    NSString * _url;
}

@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly, copy) NSString *durationString;
@property (nonatomic, readonly, copy) NSString *flavor;
@property (nonatomic, readonly, copy) NSString *url;

+ (id)movieClipAssetsWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)duration;
- (id)durationString;
- (id)flavor;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)url;

@end
