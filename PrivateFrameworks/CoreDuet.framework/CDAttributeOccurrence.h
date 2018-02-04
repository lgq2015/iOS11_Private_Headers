/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDAttributeOccurrence : NSObject {
    NSDate * _date;
    NSObject * _value;
}

@property (readonly) NSDate *date;
@property (readonly) NSObject *value;

+ (id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (id)date;
- (id)initWithValue:(id)arg1 date:(id)arg2;
- (id)value;

@end
