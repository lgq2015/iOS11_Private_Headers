/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLClassifierLabelWithProbability : NSObject {
    <NSCopying> * _label;
    NSNumber * _probability;
}

@property (nonatomic, retain) <NSCopying> *label;
@property (nonatomic, retain) NSNumber *probability;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithLabel:(id)arg1 probability:(id)arg2;
- (id)label;
- (id)probability;
- (void)setLabel:(id)arg1;
- (void)setProbability:(id)arg1;

@end
