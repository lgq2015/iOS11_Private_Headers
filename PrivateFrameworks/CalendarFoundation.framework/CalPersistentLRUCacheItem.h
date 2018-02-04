/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalPersistentLRUCacheItem : NSObject <NSSecureCoding> {
    <NSCopying><NSSecureCoding> * _key;
    CalPersistentLRUCacheItem * _nextItem;
    CalPersistentLRUCacheItem * _previousItem;
    <NSSecureCoding> * _value;
}

@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *key;
@property (nonatomic, retain) CalPersistentLRUCacheItem *nextItem;
@property (nonatomic) CalPersistentLRUCacheItem *previousItem;
@property (nonatomic, readonly) <NSSecureCoding> *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (id)nextItem;
- (id)previousItem;
- (void)setNextItem:(id)arg1;
- (void)setPreviousItem:(id)arg1;
- (id)value;

@end
