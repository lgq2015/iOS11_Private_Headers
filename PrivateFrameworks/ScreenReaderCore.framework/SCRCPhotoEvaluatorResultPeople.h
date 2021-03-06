/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSArray * _people;
}

@property (nonatomic, readonly) NSArray *people;

- (void).cxx_destruct;
- (id)humanReadableResult;
- (id)initWithPeople:(id)arg1 inImageOfSize:(struct CGSize { double x1; double x2; })arg2;
- (id)people;

@end
