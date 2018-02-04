/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureCoordinationInfo : NSObject {
    NSSet * _allExpectedResultSpecifiers;
    NSString * _identifier;
    unsigned long long  _resultSpecifiers;
}

@property (getter=isEV0ForHDREV0Pair, nonatomic, readonly) bool EV0ForHDREV0Pair;
@property (getter=isHDR, nonatomic, readonly) bool HDR;
@property (getter=isHDRForHDREV0Pair, nonatomic, readonly) bool HDRForHDREV0Pair;
@property (nonatomic, readonly) NSSet *allExpectedResultSpecifiers;
@property (getter=isFiltered, nonatomic, readonly) bool filtered;
@property (getter=isFilteredImageForFilteredPair, nonatomic, readonly) bool filteredImageForFilteredPair;
@property (getter=isFinalExpectedResult, nonatomic, readonly) bool finalExpectedResult;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long resultSpecifiers;
@property (getter=isUnfilteredImageForFilteredPair, nonatomic, readonly) bool unfilteredImageForFilteredPair;

- (void).cxx_destruct;
- (id)allExpectedResultSpecifiers;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 allExpectedResultSpecifiers:(id)arg2 resultSpecifiers:(unsigned long long)arg3;
- (bool)isEV0ForHDREV0Pair;
- (bool)isFiltered;
- (bool)isFilteredImageForFilteredPair;
- (bool)isFinalExpectedResult;
- (bool)isHDR;
- (bool)isHDRForHDREV0Pair;
- (bool)isUnfilteredImageForFilteredPair;
- (unsigned long long)resultSpecifiers;

@end
