/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMeasurementFormatter : NSMeasurementFormatter {
    id /* block */  _measurementBlock;
}

@property (nonatomic, copy) id /* block */ measurementBlock;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMeasurementBlock:(id /* block */)arg1;
- (id /* block */)measurementBlock;
- (void)setMeasurementBlock:(id /* block */)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
