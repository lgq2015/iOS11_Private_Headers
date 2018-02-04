/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADFilter : NSObject <NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (bool)supportsSecureCoding;

- (bool)applicableToEntityType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)validate;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)ekPredicateFilterMatches:(id)arg1;

@end
