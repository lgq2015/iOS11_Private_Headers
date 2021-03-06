/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCascadeList : NSArray {
    int  _character;
    unsigned long long  _count;
    struct WeakPtr<WebCore::FontCascade> { 
        struct Ref<WTF::WeakReference<WebCore::FontCascade> > { 
            struct WeakReference<WebCore::FontCascade> {} *m_ptr; 
        } m_ref; 
    }  _font;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<const __CTFontDescriptor *> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
        struct type { 
            unsigned char __lx[8]; 
        } m_inlineBuffer[16]; 
    }  _fontDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithFont:(const struct FontCascade { struct FontCascadeDescription { struct FontTaggedSettings<int> { struct Vector<WebCore::FontTaggedSetting<int>, 0, WTF::CrashOnOverflow, 16> { struct FontTaggedSetting<int> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; } x_1_1_1; struct FontTaggedSettings<float> { struct Vector<WebCore::FontTaggedSetting<float>, 0, WTF::CrashOnOverflow, 16> { struct FontTaggedSetting<float> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; } x_2_2_1; } x_1_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_1_1_3; struct FontSelectionRequest { struct FontSelectionValue { short x_1_3_1; } x_4_2_1; struct FontSelectionValue { short x_2_3_1; } x_4_2_2; struct FontSelectionValue { short x_3_3_1; } x_4_2_3; } x_1_1_4; float x_1_1_5; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 2; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 2; unsigned int x_1_1_11 : 7; unsigned int x_1_1_12 : 3; unsigned int x_1_1_13 : 2; unsigned int x_1_1_14 : 2; } x1; }*)arg1 character:(int)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
