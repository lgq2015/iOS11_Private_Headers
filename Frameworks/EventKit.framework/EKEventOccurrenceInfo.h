/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventOccurrenceInfo : NSObject {
    double  _date;
    EKObjectID * _objectID;
}

@property (nonatomic) double date;
@property (nonatomic, retain) EKObjectID *objectID;

- (void).cxx_destruct;
- (double)date;
- (id)description;
- (id)initWithObjectID:(id)arg1 date:(double)arg2;
- (id)objectID;
- (void)setDate:(double)arg1;
- (void)setObjectID:(id)arg1;

@end
