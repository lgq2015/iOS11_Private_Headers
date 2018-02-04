/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    bool  _deleted;
    int  _entityType;
    NSArray * _loadedValues;
    CADObjectID * _objectID;
    int  _rowID;
}

@property (nonatomic, readonly) bool deleted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)deleted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)loadedValues;
- (id)objectID;

@end
