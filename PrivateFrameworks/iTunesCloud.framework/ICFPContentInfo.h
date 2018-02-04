/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFPContentInfo : NSObject {
    unsigned long long  _accountID;
    long long  _vodkaType;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) union FPContentInfo_ { unsigned int x1; struct VanillaVodkaAttributes_ { unsigned int x_2_1_1; struct sinfEntry_ {} *x_2_1_2; unsigned int x_2_1_3; } x2; struct CloudVodkaAttributes_ { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; } x3; struct WHAVodkaAttributes_ { unsigned int x_4_1_1; unsigned long long x_4_1_2; } x4; } fpContentInfo;
@property (nonatomic, readonly) long long vodkaType;

+ (id)whaContentInfoWithAccountID:(unsigned long long)arg1;

- (id)_init;
- (unsigned long long)accountID;
- (union FPContentInfo_ { unsigned int x1; struct VanillaVodkaAttributes_ { unsigned int x_2_1_1; struct sinfEntry_ {} *x_2_1_2; unsigned int x_2_1_3; } x2; struct CloudVodkaAttributes_ { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; } x3; struct WHAVodkaAttributes_ { unsigned int x_4_1_1; unsigned long long x_4_1_2; } x4; })fpContentInfo;
- (long long)vodkaType;

@end
