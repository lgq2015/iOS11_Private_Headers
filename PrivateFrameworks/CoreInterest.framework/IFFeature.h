/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFFeature : NSObject <NSCopying> {
    NSString * _client;
    double  _score;
    NSString * _term;
    NSString * _type;
}

@property (readonly, copy) NSString *client;
@property (readonly) double score;
@property (readonly, copy) NSString *term;
@property (readonly, copy) NSString *type;

+ (id)featureWithType:(id)arg1 term:(id)arg2 client:(id)arg3 score:(double)arg4;

- (void).cxx_destruct;
- (id)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 term:(id)arg2 client:(id)arg3 score:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeature:(id)arg1;
- (double)score;
- (id)term;
- (id)type;

@end
