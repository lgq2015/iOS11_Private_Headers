/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEventEntityWrapper : CADEntityWrapper {
    double  _occurrenceDate;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)occurrenceDate;

@end