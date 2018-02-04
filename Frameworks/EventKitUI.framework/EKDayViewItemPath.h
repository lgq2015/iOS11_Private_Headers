/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewItemPath : NSObject <NSCopying> {
    unsigned long long  _index;
    int  _section;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) int section;

+ (id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)section;

@end
