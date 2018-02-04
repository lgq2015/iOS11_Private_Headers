/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationLimit : NSObject <FCFeedTransforming> {
    unsigned long long  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

+ (id)transformationWithLimit:(unsigned long long)arg1;

- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;

@end
