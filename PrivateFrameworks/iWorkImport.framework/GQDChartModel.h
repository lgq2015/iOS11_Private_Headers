/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDChartModel : NSObject {
    struct __CFString { } * mCatagoryTitle;
    struct __CFArray { } * mChartData;
    struct __CFArray { } * mColumnNames;
    long long  mDirection;
    bool  mIsFormulaChart;
    struct __CFBundle { } * mProcessorBundle;
    struct __CFDictionary { } * mPropertyBag;
    struct __CFArray { } * mRowNames;
    struct __CFString { } * mTitle;
    struct __CFString { } * mValue2Title;
    struct __CFString { } * mValueTitle;
}

- (struct __CFString { }*)catagoryTitle;
- (struct __CFArray { }*)chartData;
- (struct __CFArray { }*)columnNames;
- (void)dealloc;
- (long long)direction;
- (bool)hasFloatValueForProperty:(struct __CFString { }*)arg1 forSeriesAtIndex:(long long)arg2 value:(float*)arg3;
- (bool)hasIntValueForProperty:(struct __CFString { }*)arg1 forSeriesAtIndex:(long long)arg2 value:(int*)arg3;
- (bool)hasStringValueForProperty:(struct __CFString { }*)arg1 forSeriesAtIndex:(long long)arg2 value:(const struct __CFString {}**)arg3;
- (bool)hasValueForProperty:(struct __CFString { }*)arg1 forSeriesAtIndex:(long long)arg2 value:(const void**)arg3;
- (bool)isFormulaChart;
- (struct __CFDictionary { }*)propertiesForSeriesAtIndex:(long long)arg1;
- (struct __CFDictionary { }*)propertyBag;
- (struct __CFArray { }*)rowNames;
- (struct __CFArray { }*)seriesArray;
- (void)setProcessorBundle:(struct __CFBundle { }*)arg1;
- (struct __CFString { }*)title;
- (void)transpose;
- (struct __CFString { }*)value2Title;
- (struct __CFString { }*)valueTitle;

@end
