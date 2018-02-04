/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieQuadrant : NSObject {
    unsigned long long  mHorizontalHalfDisk;
    unsigned long long  mVerticalHalfDisk;
    NSArray * mWedgeLayoutInfos;
}

@property (nonatomic, readonly) unsigned long long horizontalHalfDisk;
@property (nonatomic, readonly) unsigned long long verticalHalfDisk;
@property (nonatomic, readonly, copy) NSArray *wedgeLayoutInfos;

- (void).cxx_destruct;
- (unsigned long long)horizontalHalfDisk;
- (id)initWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2 verticalHalfDisk:(unsigned long long)arg3;
- (unsigned long long)verticalHalfDisk;
- (id)wedgeLayoutInfos;

@end
