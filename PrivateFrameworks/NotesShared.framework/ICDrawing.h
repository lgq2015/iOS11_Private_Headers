/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawing : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _commandBounds;
    NSMutableOrderedSet * _commands;
    long long  _orientation;
    NSDate * _orientationTimestamp;
    NSUUID * _replicaUUID;
    TTVectorMultiTimestamp * _timestamp;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unrotatedBoundsInCommandSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _unrotatedSize;
    NSMutableOrderedSet * _visibleCommands;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool canChangeTransientOrientation;
@property (nonatomic, readonly) NSOrderedSet *commands;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullBounds;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) NSDate *orientationTimestamp;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, retain) TTVectorMultiTimestamp *timestamp;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unrotatedBoundsInCommandSpace;
@property (nonatomic) struct CGSize { double x1; double x2; } unrotatedSize;
@property (nonatomic, readonly) NSOrderedSet *visibleCommands;

+ (struct CGSize { double x1; double x2; })defaultPixelSize;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })defaultSizeOrientationTransform:(long long)arg1;
+ (struct CGSize { double x1; double x2; })fullSize:(struct CGSize { double x1; double x2; })arg1 forOrientation:(long long)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientationTransform:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)sortCommands:(id)arg1;

- (void).cxx_destruct;
- (void)addNewCommand:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateCommandBounds;
- (bool)canChangeTransientOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })commandBounds;
- (struct ICDrawingCommandID { unsigned int x1; id x2; })commandIDForNewCommand;
- (id)commands;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullBounds;
- (struct CGSize { double x1; double x2; })fullSize;
- (long long)imageOrientation;
- (id)init;
- (id)initWithArchive:(const struct Drawing { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; unsigned int x6; unsigned int x7; struct RepeatedPtrField<drawing::Command> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; double x9; struct Rectangle {} *x10; }*)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithCommands:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithDrawing:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)insertNewTestCommand;
- (void)invalidateBounds;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)mutableCommands;
- (long long)orientation;
- (id)orientationTimestamp;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientationTransform;
- (id)replicaUUID;
- (unsigned int)saveToArchive:(struct Drawing { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; unsigned int x6; unsigned int x7; struct RepeatedPtrField<drawing::Command> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; double x9; struct Rectangle {} *x10; }*)arg1 withPathData:(bool)arg2;
- (id)serializeWithPathData:(bool)arg1;
- (id)serializeWithPathData:(bool)arg1 toVersion:(unsigned int*)arg2;
- (id)setCommand:(id)arg1 hidden:(bool)arg2;
- (void)setCommandIDForInsertion:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientationTimestamp:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (bool)setTransientOrientation:(long long)arg1;
- (void)setUnrotatedBoundsInCommandSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnrotatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)sortCommands;
- (void)takeOrientationFrom:(id)arg1;
- (id)timestamp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unrotatedBoundsInCommandSpace;
- (struct CGSize { double x1; double x2; })unrotatedSize;
- (id)visibleCommandForInsertingCommand:(id)arg1;
- (id)visibleCommands;

@end
