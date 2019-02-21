@interface MypkgCounter : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
@property (nonatomic) long value;
- (void)inc;
@end

FOUNDATION_EXPORT MypkgCounter* MypkgNewCounter(void);

#endif
